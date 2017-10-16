/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSCNNPoolingNode : MPSNNFilterNode {
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    unsigned long long  _strideInPixelsX;
    unsigned long long  _strideInPixelsY;
}

// MPSCNNPoolingNode (null)

+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;

- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;
- (id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;
- (struct FilterGraphNode { int (**x1)(); struct ResourceGraphNode {} *x2; struct ResourceGraphNode {} *x3; struct FilterGraphNode {} *x4; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_5_1_1; unsigned long long x_5_1_2; unsigned long long x_5_1_3; } x5; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode {} **x_7_1_1; unsigned long long x_7_1_2; unsigned long long x_7_1_3; } x7; union { id x_8_1_1; id x_8_1_2; id x_8_1_3; bool x_8_1_4; /* Warning: Unrecognized filer type: '}' using 'void*' */ void*x_8_1_5; } x8; }*)newFilterNode;

@end