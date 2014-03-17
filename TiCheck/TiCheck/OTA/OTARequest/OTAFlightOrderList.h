//
//  OTAFlightOrderList.h
//  Test
//
//  Created by Boyi on 3/10/14.
//  Copyright (c) 2014 boyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumCollection.h"

@interface OTAFlightOrderList : NSObject

/**
 *  出行时间段开始：DateTime类型；可空
 */
@property (nonatomic, strong) NSDate *effectDate;

/**
 *  出行时间段结束：DateTime类型；可空
 */
@property (nonatomic, strong) NSDate *expiryDate;

/**
 *  订单号：Int类型；可空；不指定时输入0
 */
@property (nonatomic, strong) NSString *orderID;

/**
 *  订单状态：Int类型；0全部订单，8未提交，1未处理，2 处理状态，3已成交，4已取消，5全部退票，6部分退票
 */
@property (nonatomic) OrderStatus orderStatus;

/**
 *  数量：Int类型；必填，不指定时输入0
 */
@property (nonatomic) NSInteger topCount;

/**
 *  根据条件生成对应查询订单列表xml的请求body
 *
 *  @return 查询订单列表的xml的请求body
 */
- (NSString *)generateOTAFlightOrderListXMLRequest;

@end
