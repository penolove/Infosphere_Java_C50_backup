package application;


import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;



public class C50classifier {
	static private HashMap<Integer,C50nodeleaf> treemap = new HashMap<Integer,C50nodeleaf>();
	
	static private String [] features ={"packet1","packet2","packet3","packet4","packet5","No_segA","No_segB","No_segFr","totalsizA","totalsizB","totalsizFr","dport", "sport"};
	
	public void nodeupdate(String line){
    	System.out.println("node update");
    	Pattern pattern =Pattern.compile("^N(\\d*) \\[label=\"([ a-zA-Z1-9._]*)\".*\\]$");	
    	Matcher matcher =pattern.matcher(line);
    	if(matcher.find()){
    		this.treemap.put(Integer.valueOf(matcher.group(1)), new C50nodeleaf(matcher.group(2)));
    	}
	}
	
	
	public void ruleupdate(String line){
    	System.out.println("rule update");
    	Pattern pattern =Pattern.compile("^N(\\d*)->N(\\d*) \\[label=\"([><=]*) (\\d*)\"\\]$");	
    	Matcher matcher =pattern.matcher(line);
    	if(matcher.find()){
    		if(matcher.group(3).equals("<=")){
    			treemap.get(Integer.valueOf(matcher.group(1))).rulematch(false,Integer.valueOf(matcher.group(2)),Integer.valueOf(matcher.group(4)));
    		}else{
    			treemap.get(Integer.valueOf(matcher.group(1))).rulematch(true,Integer.valueOf(matcher.group(2)),Integer.valueOf(matcher.group(4)));
    		}
    	}
    	System.out.println("rule update done");
	}
	
	public void matchpatter(String line){
    	Pattern nodepattern =Pattern.compile("^N(\\d*) \\[label=\"([ a-zA-Z1-9._]*)\".*\\]$");	
    	Pattern rulepattern =Pattern.compile("^N(\\d*)->N(\\d*) \\[label=\"([><=]*) (\\d*)\"\\]$");	
    	Matcher nodematcher =nodepattern.matcher(line);
    	Matcher rulematcher =rulepattern.matcher(line);

    	if(nodematcher.find()){
    		System.out.println(line);
            System.out.println("node match");
            this.nodeupdate(line);
    	}else if(rulematcher.find()){
    		System.out.println(line);
            System.out.println("rule match");
            this.ruleupdate(line);
    	}
	}
	
	
	public void growtrees(String [] lines){
		for (String line : lines){
			this.matchpatter(line);
		}
	}
	public void growtree(String  line){
			this.matchpatter(line);
	}
	
	public String prediction(String[] Data_feature){
		//String [] Data_feature=line.split(",");
		HashMap<String,Integer> predMap = new HashMap<String,Integer>();
		if(Data_feature.length==13){
			for (int idx =0; idx <13 ;idx ++){
				predMap.put(features[idx], Integer.valueOf(Data_feature[idx]));
			}
		}else{
			return "NULL";
		}
		
		int leafidx=0;
		C50nodeleaf templeaf= treemap.get(leafidx);
		while(templeaf.right!=0||templeaf.left!=0){
			if(predMap.get(templeaf.label)>templeaf.value){
				leafidx=templeaf.right;
			}else{
				leafidx=templeaf.left;
			}
			templeaf= treemap.get(leafidx);
		}

		return templeaf.label;
		
		
	}
}

