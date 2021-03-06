/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
 */

@interface MPSCNNConvolutionDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSData * _batchNormalizationData;
    MPSCNNNeuron * _deprecated_neuron;
    bool  _depthWiseConvolution;
    unsigned long long  _dilationRateX;
    unsigned long long  _dilationRateY;
    unsigned long long  _featureChannelsLayout;
    unsigned long long  _groups;
    unsigned long long  _inputFeatureChannels;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    float  _neuronA;
    float  _neuronB;
    int  _neuronType;
    MPSCNNNeuron * _neuron_deprecated;
    unsigned long long  _outputFeatureChannels;
    NSData * _perChannelNeuronA;
    unsigned long long  _strideInPixelsX;
    unsigned long long  _strideInPixelsY;
    unsigned long long  _subPixelScaleFactor;
}

@property (nonatomic, readwrite) unsigned long long dilationRateX;
@property (nonatomic, readwrite) unsigned long long dilationRateY;
@property (nonatomic, readwrite) unsigned long long featureChannelsLayout;
@property (nonatomic, readwrite) unsigned long long groups;
@property (nonatomic, readwrite) unsigned long long inputFeatureChannels;
@property (nonatomic, readwrite) unsigned long long kernelHeight;
@property (nonatomic, readwrite) unsigned long long kernelWidth;
@property (nonatomic, readwrite, retain) MPSCNNNeuron *neuron;
@property (nonatomic, readwrite) unsigned long long outputFeatureChannels;
@property (nonatomic, readwrite) unsigned long long strideInPixelsX;
@property (nonatomic, readwrite) unsigned long long strideInPixelsY;

// MPSCNNConvolutionDescriptor (null)

+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 postFilters:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)dilationRateX;
- (unsigned long long)dilationRateY;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureChannelsLayout;
- (unsigned long long)groups;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (id)neuron;
- (/* Warning: unhandled struct encoding: '{NeuronInfo=iff@}' */ struct NeuronInfo { int x1; float x2; float x3; id x4; })neuronInfo;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (int)neuronType;
- (id)newDescriptorWithNeuronInfo:(/* Warning: unhandled struct encoding: '{NeuronInfo=iff@}' */ struct NeuronInfo { int x1; float x2; float x3; id x4; })arg1;
- (unsigned long long)outputFeatureChannels;
- (void)setBatchNormalizationParametersForInferenceWithMean:(const float*)arg1 variance:(const float*)arg2 gamma:(const float*)arg3 beta:(const float*)arg4 epsilon:(float)arg5;
- (void)setDilationRateX:(unsigned long long)arg1;
- (void)setDilationRateY:(unsigned long long)arg1;
- (void)setFeatureChannelsLayout:(unsigned long long)arg1;
- (void)setGroups:(unsigned long long)arg1;
- (void)setInputFeatureChannels:(unsigned long long)arg1;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1;
- (void)setNeuron:(id)arg1;
- (void)setNeuronParameterA:(float)arg1;
- (void)setNeuronParameterB:(float)arg1;
- (void)setNeuronToPReLUWithParametersA:(id)arg1;
- (void)setNeuronType:(int)arg1;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3;
- (void)setOutputFeatureChannels:(unsigned long long)arg1;
- (void)setStrideInPixelsX:(unsigned long long)arg1;
- (void)setStrideInPixelsY:(unsigned long long)arg1;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)strideInPixelsY;

@end
