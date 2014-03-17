//
//  Passenger.h
//  Test
//
//  Created by Boyi on 3/11/14.
//  Copyright (c) 2014 boyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumCollection.h"

@interface Passenger : NSObject

/**
 *  乘机人姓名：string类型；必填
 */
@property (nonatomic, strong) NSString *passengerName;

/**
 *  乘机人姓名拼音
 */
@property (nonatomic, strong) NSString *passengerNamePY;

/**
 *  乘机人出生日期：DateTime类型；必填；yyyy-MM-dd
 */
@property (nonatomic, strong) NSDate *birthDay;

/**
 *  证件类型ID：Int类型；必填：1身份证，2护照，4军人证，7回乡证，8台胞证，10港澳通行证，11国际海员证，20外国人永久居留证，25户口簿，27出生证明，99其它
 */
@property (nonatomic) PassportType passportType;

/**
 *  证件名称，如‘护照’
 */
@property (nonatomic, strong) NSString *cardTypeName;

/**
 *  证件号码：string类型；必填
 */
@property (nonatomic, strong) NSString *passportNumber;

/**
 *  乘机人联系电话：string类型；必填
 */
@property (nonatomic, strong) NSString *contactTelephone;

/**
 *  乘机人性别
 */
@property (nonatomic) Gender gender;

/**
 *  国家代码：string类型；必填
 */
@property (nonatomic, strong) NSString *nationalityCode;

/**
 *  国家名称
 */
@property (nonatomic, strong) NSString *nationalityName;

/**
 *  证件有效期
 */
@property (nonatomic, strong) NSDate *cardValid;

/**
 *  携程员工填写
 */
@property (nonatomic, strong) NSString *corpEid;

@end
