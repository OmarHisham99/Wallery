#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005B System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005F T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000060 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[97] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[97] = 
{
	4936,
	5128,
	5128,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 21 } },
	{ 0x02000011, { 168, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[170] = 
{
	{ (Il2CppRGCTXDataType)2, 2275 },
	{ (Il2CppRGCTXDataType)3, 9346 },
	{ (Il2CppRGCTXDataType)2, 3665 },
	{ (Il2CppRGCTXDataType)2, 3154 },
	{ (Il2CppRGCTXDataType)3, 16460 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)2, 3161 },
	{ (Il2CppRGCTXDataType)3, 16495 },
	{ (Il2CppRGCTXDataType)2, 3156 },
	{ (Il2CppRGCTXDataType)3, 16472 },
	{ (Il2CppRGCTXDataType)2, 2276 },
	{ (Il2CppRGCTXDataType)3, 9347 },
	{ (Il2CppRGCTXDataType)2, 3688 },
	{ (Il2CppRGCTXDataType)2, 3166 },
	{ (Il2CppRGCTXDataType)3, 16510 },
	{ (Il2CppRGCTXDataType)2, 2377 },
	{ (Il2CppRGCTXDataType)2, 3174 },
	{ (Il2CppRGCTXDataType)3, 16696 },
	{ (Il2CppRGCTXDataType)2, 3170 },
	{ (Il2CppRGCTXDataType)3, 16595 },
	{ (Il2CppRGCTXDataType)2, 786 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)3, 6633 },
	{ (Il2CppRGCTXDataType)2, 788 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 6638 },
	{ (Il2CppRGCTXDataType)2, 1012 },
	{ (Il2CppRGCTXDataType)3, 1657 },
	{ (Il2CppRGCTXDataType)3, 1658 },
	{ (Il2CppRGCTXDataType)2, 2041 },
	{ (Il2CppRGCTXDataType)2, 1534 },
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)2, 1742 },
	{ (Il2CppRGCTXDataType)2, 2042 },
	{ (Il2CppRGCTXDataType)2, 1535 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)3, 6634 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)3, 6632 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)2, 1739 },
	{ (Il2CppRGCTXDataType)3, 6631 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)2, 1636 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)3, 19634 },
	{ (Il2CppRGCTXDataType)3, 5946 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)2, 1741 },
	{ (Il2CppRGCTXDataType)2, 1840 },
	{ (Il2CppRGCTXDataType)3, 9348 },
	{ (Il2CppRGCTXDataType)3, 9350 },
	{ (Il2CppRGCTXDataType)2, 568 },
	{ (Il2CppRGCTXDataType)3, 9349 },
	{ (Il2CppRGCTXDataType)3, 9358 },
	{ (Il2CppRGCTXDataType)2, 2279 },
	{ (Il2CppRGCTXDataType)2, 3157 },
	{ (Il2CppRGCTXDataType)3, 16473 },
	{ (Il2CppRGCTXDataType)3, 9359 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)2, 1771 },
	{ (Il2CppRGCTXDataType)3, 6644 },
	{ (Il2CppRGCTXDataType)3, 19595 },
	{ (Il2CppRGCTXDataType)2, 3171 },
	{ (Il2CppRGCTXDataType)3, 16596 },
	{ (Il2CppRGCTXDataType)3, 9351 },
	{ (Il2CppRGCTXDataType)2, 2278 },
	{ (Il2CppRGCTXDataType)2, 3155 },
	{ (Il2CppRGCTXDataType)3, 16461 },
	{ (Il2CppRGCTXDataType)3, 6643 },
	{ (Il2CppRGCTXDataType)3, 9352 },
	{ (Il2CppRGCTXDataType)3, 19594 },
	{ (Il2CppRGCTXDataType)2, 3167 },
	{ (Il2CppRGCTXDataType)3, 16511 },
	{ (Il2CppRGCTXDataType)3, 9365 },
	{ (Il2CppRGCTXDataType)2, 2280 },
	{ (Il2CppRGCTXDataType)2, 3162 },
	{ (Il2CppRGCTXDataType)3, 16496 },
	{ (Il2CppRGCTXDataType)3, 9993 },
	{ (Il2CppRGCTXDataType)3, 4591 },
	{ (Il2CppRGCTXDataType)3, 6645 },
	{ (Il2CppRGCTXDataType)3, 4590 },
	{ (Il2CppRGCTXDataType)3, 9366 },
	{ (Il2CppRGCTXDataType)3, 19596 },
	{ (Il2CppRGCTXDataType)2, 3175 },
	{ (Il2CppRGCTXDataType)3, 16697 },
	{ (Il2CppRGCTXDataType)3, 9379 },
	{ (Il2CppRGCTXDataType)2, 2282 },
	{ (Il2CppRGCTXDataType)2, 3173 },
	{ (Il2CppRGCTXDataType)3, 16598 },
	{ (Il2CppRGCTXDataType)3, 9380 },
	{ (Il2CppRGCTXDataType)2, 1680 },
	{ (Il2CppRGCTXDataType)2, 1774 },
	{ (Il2CppRGCTXDataType)3, 6649 },
	{ (Il2CppRGCTXDataType)3, 6648 },
	{ (Il2CppRGCTXDataType)2, 3159 },
	{ (Il2CppRGCTXDataType)3, 16475 },
	{ (Il2CppRGCTXDataType)3, 19601 },
	{ (Il2CppRGCTXDataType)2, 3172 },
	{ (Il2CppRGCTXDataType)3, 16597 },
	{ (Il2CppRGCTXDataType)3, 9372 },
	{ (Il2CppRGCTXDataType)2, 2281 },
	{ (Il2CppRGCTXDataType)2, 3169 },
	{ (Il2CppRGCTXDataType)3, 16513 },
	{ (Il2CppRGCTXDataType)3, 6647 },
	{ (Il2CppRGCTXDataType)3, 6646 },
	{ (Il2CppRGCTXDataType)3, 9373 },
	{ (Il2CppRGCTXDataType)2, 3158 },
	{ (Il2CppRGCTXDataType)3, 16474 },
	{ (Il2CppRGCTXDataType)3, 19600 },
	{ (Il2CppRGCTXDataType)2, 3168 },
	{ (Il2CppRGCTXDataType)3, 16512 },
	{ (Il2CppRGCTXDataType)3, 9386 },
	{ (Il2CppRGCTXDataType)2, 2283 },
	{ (Il2CppRGCTXDataType)2, 3177 },
	{ (Il2CppRGCTXDataType)3, 16699 },
	{ (Il2CppRGCTXDataType)3, 9994 },
	{ (Il2CppRGCTXDataType)3, 4593 },
	{ (Il2CppRGCTXDataType)3, 6651 },
	{ (Il2CppRGCTXDataType)3, 6650 },
	{ (Il2CppRGCTXDataType)3, 4592 },
	{ (Il2CppRGCTXDataType)3, 9387 },
	{ (Il2CppRGCTXDataType)2, 3160 },
	{ (Il2CppRGCTXDataType)3, 16476 },
	{ (Il2CppRGCTXDataType)3, 19602 },
	{ (Il2CppRGCTXDataType)2, 3176 },
	{ (Il2CppRGCTXDataType)3, 16698 },
	{ (Il2CppRGCTXDataType)3, 6641 },
	{ (Il2CppRGCTXDataType)3, 6642 },
	{ (Il2CppRGCTXDataType)3, 6655 },
	{ (Il2CppRGCTXDataType)2, 3695 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)2, 1537 },
	{ (Il2CppRGCTXDataType)2, 3691 },
	{ (Il2CppRGCTXDataType)2, 1654 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)3, 5964 },
	{ (Il2CppRGCTXDataType)2, 1304 },
	{ (Il2CppRGCTXDataType)3, 7121 },
	{ (Il2CppRGCTXDataType)3, 7122 },
	{ (Il2CppRGCTXDataType)3, 7127 },
	{ (Il2CppRGCTXDataType)2, 1848 },
	{ (Il2CppRGCTXDataType)3, 7124 },
	{ (Il2CppRGCTXDataType)3, 20348 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)3, 4579 },
	{ (Il2CppRGCTXDataType)1, 1606 },
	{ (Il2CppRGCTXDataType)2, 3699 },
	{ (Il2CppRGCTXDataType)3, 7123 },
	{ (Il2CppRGCTXDataType)1, 3699 },
	{ (Il2CppRGCTXDataType)1, 1848 },
	{ (Il2CppRGCTXDataType)2, 3760 },
	{ (Il2CppRGCTXDataType)2, 3699 },
	{ (Il2CppRGCTXDataType)3, 7128 },
	{ (Il2CppRGCTXDataType)3, 7126 },
	{ (Il2CppRGCTXDataType)3, 7125 },
	{ (Il2CppRGCTXDataType)2, 446 },
	{ (Il2CppRGCTXDataType)3, 4594 },
	{ (Il2CppRGCTXDataType)2, 577 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	97,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	170,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
