package application;
import com.ibm.streams.operator.metrics.Metric.Kind;
import com.ibm.streams.operator.model.InputPortSet.WindowMode;
import com.ibm.streams.operator.model.InputPortSet.WindowPunctuationInputMode;
import com.ibm.streams.operator.model.OutputPortSet.WindowPunctuationOutputMode;

@com.ibm.streams.operator.model.PrimitiveOperator(name="C50JavaOP", namespace="application", description="Java Operator C50JavaOP")
@com.ibm.streams.operator.model.InputPorts(value={@com.ibm.streams.operator.model.InputPortSet(description="Port that ingests tuples", cardinality=1, optional=false, windowingMode=WindowMode.NonWindowed, windowPunctuationInputMode=WindowPunctuationInputMode.Oblivious), @com.ibm.streams.operator.model.InputPortSet(description="Optional input ports", optional=true, windowingMode=WindowMode.NonWindowed, windowPunctuationInputMode=WindowPunctuationInputMode.Oblivious)})
@com.ibm.streams.operator.model.OutputPorts(value={@com.ibm.streams.operator.model.OutputPortSet(description="Port that produces tuples", cardinality=1, optional=false, windowPunctuationOutputMode=WindowPunctuationOutputMode.Generating), @com.ibm.streams.operator.model.OutputPortSet(description="Optional output ports", optional=true, windowPunctuationOutputMode=WindowPunctuationOutputMode.Generating)})
@com.ibm.streams.operator.internal.model.ShadowClass("application.C50JavaOP")
@javax.annotation.Generated("com.ibm.streams.operator.internal.model.processors.ShadowClassGenerator")
public class C50JavaOP$StreamsModel extends com.ibm.streams.operator.AbstractOperator
 {
}