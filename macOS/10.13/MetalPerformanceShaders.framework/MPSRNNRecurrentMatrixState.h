/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSRNNRecurrentMatrixState : MPSState {
    id * cellMatrices;
    int  nLayers;
    id * recurrentMatrices;
}

// MPSRNNRecurrentMatrixState (null)

- (void)dealloc;
- (id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1;
- (id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5;
- (void)setReadCount:(unsigned long long)arg1;

@end