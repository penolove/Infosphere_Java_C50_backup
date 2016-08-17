package application;

public class C50nodeleaf{
	 int right;
	 int left;
	 double value;
	 String label;
	
	public C50nodeleaf(String label){
		this.label=label;
	}
	public void rulematch(boolean direction,int Id,double tar){
		if(direction){
			this.right=Id;
		}else{
			this.left=Id;
		}
		this.value=tar;
	}
	public void printslef(){
   	System.out.println("label&value: "+this.label+","+String.valueOf(value)+ ", right: "+String.valueOf(right)+", left: "+String.valueOf(left));

	}
}