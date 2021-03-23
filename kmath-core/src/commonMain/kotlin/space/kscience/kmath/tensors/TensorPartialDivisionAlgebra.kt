package space.kscience.kmath.tensors

// https://proofwiki.org/wiki/Definition:Division_Algebra
public interface TensorPartialDivisionAlgebra<T, TensorType : TensorStructure<T>> :
    TensorAlgebra<T, TensorType> {
    public operator fun TensorType.div(value: T): TensorType
    public operator fun TensorType.div(other: TensorType): TensorType
    public operator fun TensorType.divAssign(value: T)
    public operator fun TensorType.divAssign(other: TensorType)

    //https://pytorch.org/docs/stable/generated/torch.mean.html#torch.mean
    public fun TensorType.mean(dim: Int, keepDim: Boolean): TensorType

    //https://pytorch.org/docs/stable/generated/torch.var.html#torch.var
    public fun TensorType.variance(dim: Int, unbiased: Boolean, keepDim: Boolean): TensorType
}