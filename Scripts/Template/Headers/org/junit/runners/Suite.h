//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/Suite.java
//

#ifndef _OrgJunitRunnersSuite_H_
#define _OrgJunitRunnersSuite_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/annotation/Annotation.h>
#include <j2objc/org/junit/runners/ParentRunner.h>

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;
@protocol JavaUtilList;

@interface OrgJunitRunnersSuite : OrgJunitRunnersParentRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass
withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                        withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerRunner *)emptySuite;

#pragma mark Protected

- (instancetype)initWithIOSClass:(IOSClass *)klass
               withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (instancetype)initWithIOSClass:(IOSClass *)klass
                withJavaUtilList:(id<JavaUtilList>)runners;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                             withIOSClass:(IOSClass *)klass
                                        withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnerRunner *)child;

- (id<JavaUtilList>)getChildren;

- (void)runChildWithId:(OrgJunitRunnerRunner *)runner
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersSuite)

FOUNDATION_EXPORT OrgJunitRunnerRunner *OrgJunitRunnersSuite_emptySuite();

FOUNDATION_EXPORT void OrgJunitRunnersSuite_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(OrgJunitRunnersSuite *self, IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder);

FOUNDATION_EXPORT OrgJunitRunnersSuite *new_OrgJunitRunnersSuite_initWithIOSClass_withOrgJunitRunnersModelRunnerBuilder_(IOSClass *klass, OrgJunitRunnersModelRunnerBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersSuite_initWithOrgJunitRunnersModelRunnerBuilder_withIOSClassArray_(OrgJunitRunnersSuite *self, OrgJunitRunnersModelRunnerBuilder *builder, IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnersSuite *new_OrgJunitRunnersSuite_initWithOrgJunitRunnersModelRunnerBuilder_withIOSClassArray_(OrgJunitRunnersModelRunnerBuilder *builder, IOSObjectArray *classes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersSuite_initWithIOSClass_withIOSClassArray_(OrgJunitRunnersSuite *self, IOSClass *klass, IOSObjectArray *suiteClasses);

FOUNDATION_EXPORT OrgJunitRunnersSuite *new_OrgJunitRunnersSuite_initWithIOSClass_withIOSClassArray_(IOSClass *klass, IOSObjectArray *suiteClasses) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersSuite_initWithOrgJunitRunnersModelRunnerBuilder_withIOSClass_withIOSClassArray_(OrgJunitRunnersSuite *self, OrgJunitRunnersModelRunnerBuilder *builder, IOSClass *klass, IOSObjectArray *suiteClasses);

FOUNDATION_EXPORT OrgJunitRunnersSuite *new_OrgJunitRunnersSuite_initWithOrgJunitRunnersModelRunnerBuilder_withIOSClass_withIOSClassArray_(OrgJunitRunnersModelRunnerBuilder *builder, IOSClass *klass, IOSObjectArray *suiteClasses) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRunnersSuite_initWithIOSClass_withJavaUtilList_(OrgJunitRunnersSuite *self, IOSClass *klass, id<JavaUtilList> runners);

FOUNDATION_EXPORT OrgJunitRunnersSuite *new_OrgJunitRunnersSuite_initWithIOSClass_withJavaUtilList_(IOSClass *klass, id<JavaUtilList> runners) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersSuite)

@protocol OrgJunitRunnersSuite_SuiteClasses < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface OrgJunitRunnersSuite_SuiteClasses : NSObject < OrgJunitRunnersSuite_SuiteClasses > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersSuite_SuiteClasses)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersSuite_SuiteClasses)

#endif // _OrgJunitRunnersSuite_H_