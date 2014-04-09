//
//  NSString+DateFormat.m
//  Test
//
//  Created by Boyi on 3/4/14.
//  Copyright (c) 2014 boyi. All rights reserved.
//

#import "NSString+DateFormat.h"

#define DATE_FORMAT @"yyyy-MM-dd"
#define TIME_FORMAT @"yyyy-MM-dd'T'HH-mm-ss"

@implementation NSString (DateFormat)

+ (NSString *)stringFormatWithDate:(NSDate *)date
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:DATE_FORMAT];
    NSString *dateStr = [dateFormatter stringFromDate:date];
    return dateStr;
}

+ (NSString *)stringFormatWithTime:(NSDate *)date
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:TIME_FORMAT];
    NSString *dateStr = [dateFormatter stringFromDate:date];
    return dateStr;
}

+ (NSDate *)timeFormatWithString:(NSString *)timeStr
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:TIME_FORMAT];
    NSDate *time = [dateFormatter dateFromString:timeStr];
    return time;
}

+ (NSDate *)dateFormatWithString:(NSString *)dateStr
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:DATE_FORMAT];
    NSDate *date = [dateFormatter dateFromString:dateStr];
    return date;
}

@end