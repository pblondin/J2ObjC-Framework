//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/ParseException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextParseException")
#ifdef RESTRICT_JavaTextParseException
#define INCLUDE_ALL_JavaTextParseException 0
#else
#define INCLUDE_ALL_JavaTextParseException 1
#endif
#undef RESTRICT_JavaTextParseException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextParseException_) && (INCLUDE_ALL_JavaTextParseException || defined(INCLUDE_JavaTextParseException))
#define JavaTextParseException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief Thrown when the string being parsed is not in the correct form.
 */
@interface JavaTextParseException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new instance of this class with its stack trace, detail
 message and the location of the error filled in.
 @param detailMessage
 the detail message for this exception.
 @param location
 the index at which the parse exception occurred.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                         withInt:(jint)location;

/*!
 @brief Returns the index at which this parse exception occurred.
 @return the location of this exception in the parsed string.
 */
- (jint)getErrorOffset;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextParseException)

FOUNDATION_EXPORT void JavaTextParseException_initWithNSString_withInt_(JavaTextParseException *self, NSString *detailMessage, jint location);

FOUNDATION_EXPORT JavaTextParseException *new_JavaTextParseException_initWithNSString_withInt_(NSString *detailMessage, jint location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextParseException *create_JavaTextParseException_initWithNSString_withInt_(NSString *detailMessage, jint location);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextParseException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextParseException")
