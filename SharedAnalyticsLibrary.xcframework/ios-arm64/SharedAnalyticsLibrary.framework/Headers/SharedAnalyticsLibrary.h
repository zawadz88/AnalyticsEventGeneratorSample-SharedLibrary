#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SALRuntimeAbstractEvent, SALSampleActionWithTimer, SALSampleAdditionalButtonTapped, SALSampleButtonTapped, SALSampleSomethingMyType, SALSampleSomethingTypeWithDefault, SALSampleSomething, SALKotlinEnumCompanion, SALKotlinEnum<E>, SALKotlinArray<T>, SALSampleSomethingTypeWithFixed;

@protocol SALPlatform, SALKotlinComparable, SALEventReportingRepository, SALKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SALBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SALBase (SALBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SALMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SALMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSALKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SALNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SALByte : SALNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SALUByte : SALNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SALShort : SALNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SALUShort : SALNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SALInt : SALNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SALUInt : SALNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SALLong : SALNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SALULong : SALNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SALFloat : SALNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SALDouble : SALNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SALBoolean : SALNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Platform")))
@protocol SALPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SALIOSPlatform : SALBase <SALPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("EventReportingRepository")))
@protocol SALEventReportingRepository
@required
- (void)reportEventEvent:(SALRuntimeAbstractEvent *)event __attribute__((swift_name("reportEvent(event:)")));
@end

__attribute__((swift_name("RuntimeAbstractEvent")))
@interface SALRuntimeAbstractEvent : SALBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *eventValue __attribute__((swift_name("eventValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleActionWithTimer")))
@interface SALSampleActionWithTimer : SALRuntimeAbstractEvent
- (instancetype)initWithDuration:(int64_t)duration __attribute__((swift_name("init(duration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SALSampleActionWithTimer *)doCopyDuration:(int64_t)duration __attribute__((swift_name("doCopy(duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property int64_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *eventValue __attribute__((swift_name("eventValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleAdditionalButtonTapped")))
@interface SALSampleAdditionalButtonTapped : SALRuntimeAbstractEvent
- (instancetype)initWithButtonId:(NSString *)buttonId __attribute__((swift_name("init(buttonId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SALSampleAdditionalButtonTapped *)doCopyButtonId:(NSString *)buttonId __attribute__((swift_name("doCopy(buttonId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *buttonId __attribute__((swift_name("buttonId")));
@property (readonly) NSString *eventValue __attribute__((swift_name("eventValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleButtonTapped")))
@interface SALSampleButtonTapped : SALRuntimeAbstractEvent
- (instancetype)initWithButtonId:(NSString *)buttonId someOptional:(NSString * _Nullable)someOptional __attribute__((swift_name("init(buttonId:someOptional:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithButtonId:(NSString *)buttonId someOptional:(NSString * _Nullable)someOptional someOptional2:(NSString * _Nullable)someOptional2 __attribute__((swift_name("init(buttonId:someOptional:someOptional2:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithButtonId:(NSString *)buttonId someOptional:(NSString * _Nullable)someOptional someOptional2:(NSString * _Nullable)someOptional2 someOptional3:(NSString * _Nullable)someOptional3 __attribute__((swift_name("init(buttonId:someOptional:someOptional2:someOptional3:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithButtonId:(NSString *)buttonId someOptional:(NSString * _Nullable)someOptional someOptional2:(NSString * _Nullable)someOptional2 someOptional3:(NSString * _Nullable)someOptional3 someDefault:(NSString *)someDefault __attribute__((swift_name("init(buttonId:someOptional:someOptional2:someOptional3:someDefault:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SALSampleButtonTapped *)doCopyButtonId:(NSString *)buttonId someOptional:(NSString * _Nullable)someOptional someOptional2:(NSString * _Nullable)someOptional2 someOptional3:(NSString * _Nullable)someOptional3 someDefault:(NSString *)someDefault __attribute__((swift_name("doCopy(buttonId:someOptional:someOptional2:someOptional3:someDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *buttonId __attribute__((swift_name("buttonId")));
@property (readonly) NSString *eventValue __attribute__((swift_name("eventValue")));
@property (readonly) NSString *someDefault __attribute__((swift_name("someDefault")));
@property (readonly) NSString * _Nullable someOptional __attribute__((swift_name("someOptional")));
@property (readonly) NSString * _Nullable someOptional2 __attribute__((swift_name("someOptional2")));
@property (readonly) NSString * _Nullable someOptional3 __attribute__((swift_name("someOptional3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleSomething")))
@interface SALSampleSomething : SALRuntimeAbstractEvent
- (instancetype)initWithIsEnabled:(BOOL)isEnabled clickCount:(int32_t)clickCount duration:(int64_t)duration accuracy:(double)accuracy myType:(SALSampleSomethingMyType *)myType __attribute__((swift_name("init(isEnabled:clickCount:duration:accuracy:myType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsEnabled:(BOOL)isEnabled clickCount:(int32_t)clickCount duration:(int64_t)duration accuracy:(double)accuracy myType:(SALSampleSomethingMyType *)myType typeWithDefault:(SALSampleSomethingTypeWithDefault *)typeWithDefault __attribute__((swift_name("init(isEnabled:clickCount:duration:accuracy:myType:typeWithDefault:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SALSampleSomething *)doCopyIsEnabled:(BOOL)isEnabled clickCount:(int32_t)clickCount duration:(int64_t)duration accuracy:(double)accuracy myType:(SALSampleSomethingMyType *)myType typeWithDefault:(SALSampleSomethingTypeWithDefault *)typeWithDefault __attribute__((swift_name("doCopy(isEnabled:clickCount:duration:accuracy:myType:typeWithDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double accuracy __attribute__((swift_name("accuracy")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) int32_t clickCount __attribute__((swift_name("clickCount")));
@property int64_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *eventValue __attribute__((swift_name("eventValue")));
@property (readonly) BOOL isEnabled __attribute__((swift_name("isEnabled")));
@property (readonly) SALSampleSomethingMyType *myType __attribute__((swift_name("myType")));
@property (readonly) SALSampleSomethingTypeWithDefault *typeWithDefault __attribute__((swift_name("typeWithDefault")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SALKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SALKotlinEnum<E> : SALBase <SALKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SALKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleSomething.MyType")))
@interface SALSampleSomethingMyType : SALKotlinEnum<SALSampleSomethingMyType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SALSampleSomethingMyType *default_ __attribute__((swift_name("default_")));
@property (class, readonly) SALSampleSomethingMyType *custom __attribute__((swift_name("custom")));
+ (SALKotlinArray<SALSampleSomethingMyType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SALSampleSomethingMyType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *enumValue __attribute__((swift_name("enumValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleSomething.TypeWithDefault")))
@interface SALSampleSomethingTypeWithDefault : SALKotlinEnum<SALSampleSomethingTypeWithDefault *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SALSampleSomethingTypeWithDefault *foo __attribute__((swift_name("foo")));
@property (class, readonly) SALSampleSomethingTypeWithDefault *bar __attribute__((swift_name("bar")));
@property (class, readonly) SALSampleSomethingTypeWithDefault *foobar __attribute__((swift_name("foobar")));
+ (SALKotlinArray<SALSampleSomethingTypeWithDefault *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SALSampleSomethingTypeWithDefault *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *enumValue __attribute__((swift_name("enumValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleSomething.TypeWithFixed")))
@interface SALSampleSomethingTypeWithFixed : SALKotlinEnum<SALSampleSomethingTypeWithFixed *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SALSampleSomethingTypeWithFixed *helloFriend __attribute__((swift_name("helloFriend")));
@property (class, readonly) SALSampleSomethingTypeWithFixed *unknown __attribute__((swift_name("unknown")));
+ (SALKotlinArray<SALSampleSomethingTypeWithFixed *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SALSampleSomethingTypeWithFixed *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *enumValue __attribute__((swift_name("enumValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SALPlatform_iosKt : SALBase
+ (id<SALPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceLocatorKt")))
@interface SALServiceLocatorKt : SALBase
@property (class, readonly) id<SALEventReportingRepository> eventReportingRepository __attribute__((swift_name("eventReportingRepository")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SALKotlinEnumCompanion : SALBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SALKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SALKotlinArray<T> : SALBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SALInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SALKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SALKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
