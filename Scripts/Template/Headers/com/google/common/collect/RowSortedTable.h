//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/RowSortedTable.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL")
#if ComGoogleCommonCollectRowSortedTable_RESTRICT
#define ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRowSortedTable_RESTRICT

#if !defined (_ComGoogleCommonCollectRowSortedTable_) && (ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectRowSortedTable_INCLUDE)
#define _ComGoogleCommonCollectRowSortedTable_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include <j2objc/com/google/common/collect/Table.h>

@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@protocol ComGoogleCommonCollectRowSortedTable < ComGoogleCommonCollectTable, NSObject, JavaObject >

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRowSortedTable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRowSortedTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL")