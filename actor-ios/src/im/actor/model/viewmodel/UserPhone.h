//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/viewmodel/UserPhone.java
//

#ifndef _AMUserPhone_H_
#define _AMUserPhone_H_

#include "J2ObjC_header.h"

@interface AMUserPhone : NSObject {
}

- (instancetype)initWithLong:(jlong)phone
                withNSString:(NSString *)title;

- (jlong)getPhone;

- (NSString *)getTitle;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(AMUserPhone)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef AMUserPhone ImActorModelViewmodelUserPhone;

J2OBJC_TYPE_LITERAL_HEADER(AMUserPhone)

#endif // _AMUserPhone_H_
