//
//  STPDeviceApi.h
//  Pods
//
//  Created by kris on 16/11/12.
//
//

#import <Foundation/Foundation.h>
#import "STPDeviceModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface STPDeviceApi : NSObject

#pragma mark ----------·--------- 设备交互 ------------------------

/**
 发送文本内容
 @param text 文字内容
 */
+ (void)sendTTSText:(NSString *)text block:(void (^)(BOOL isSuccess,NSError*_Nullable error))block;

/**
 发送声音文件
 @param filePath 文件url 路径
 @param progressBlock 上传进度
 @param resultBlock 上传结果
 */
+ (void)sendVoice:(NSString *)filePath length:(NSUInteger)length progressBlock:(void(^)(NSProgress *progress))progressBlock  resultBlock:(void (^)(id  response, NSError * _Nullable))resultBlock;

/**
 获取聊天记录的列表
 @param fromID 首次为0 其他使用当前聊天记录列表最后的STPChatModel的chatID
 */
+(void)getChatMessageList:(NSString*)fromID block:(void (^)(STPChatList *chatList,NSError *error))block;

/**
 设置用户推送的token 
 @param pushToken apple pushToken
 */
+ (void)setPushToken:(NSString *_Nonnull)pushToken block:(void (^)(BOOL  isSuccess,NSError *error)) block;


#pragma mark ------------------- 设备信息 ------------------------

/**
 获取用户的所有设备

 @param currDetail 是否显示当前控制设备的详情  YES等于同时调用getDeviceDetail
 */
+ (void)getDeviceList:(BOOL)currDetail block:(void(^)(NSArray <STPDeviceModel*>*device,NSError* _Nullable error))block;

/**
 获取设备详细信息
 */
+ (void)getDeviceDetail:(nonnull void (^)(STPDevicesDetail *detail,NSError* _Nullable error))block;

/**
  获取设备硬件信息
 */
+ (void)getHardwareInfo:(nonnull void(^)(STPHardwareModel *hardMode,NSError* _Nullable error))block;


#pragma mark ------------------- 设备控制 ------------------------

/**
 发送自定义控制命令(如耳灯 童锁)
 @param params 请求参数
 */
+ (void)sendCustomCommand:(NSDictionary*)params block:(void (^)(BOOL isSuccess,NSError *error))block;

/**
 重启设备
 @param block isSucceed 是否成功 error 错误信息
 */
+ (void)restartDevice:(void (^)(BOOL isSuccess,NSError *error))block;

/**
 关闭设备
 @param block isSucceed 是否成功 error 错误信息
 */
+ (void)shutdownDevice:(void (^)(BOOL isSuccess,NSError* _Nullable error))block;

/**
 修改设备的名称
 @param deviceName 新的名称
 */
+ (void)updateDeviceName:(NSString *_Nonnull)deviceName block:(void (^)(BOOL isSuccess,NSError* _Nullable error)) block;

/**
 修改设备音量
 @param voiceValue 音量值 最小值0 最大值100

 */
+ (void)changeDeviceVolume:(NSInteger )voiceValue block:(void (^)(BOOL isSuccess,NSError* _Nullable error)) block;

/**
 删除当前的设备
 */
+ (void)deleteDevice:(void (^)(BOOL isSuccess,NSError *_Nullable error)) block;
#pragma mark -------------------版本升级------------------------

/**
    检测是否有新版本
 */
+(void)checkDeviceVersion:(void (^)(BOOL update,NSString *version,NSError * _Nullable error))block;

/**
    设备升级
 */
+(void)updateDevice:(void (^)(id response, NSError * _Nullable error))block;

/**
  获取闹钟列表
 */
+(void)getAlarmList:(void (^)(STPAlarmList *alarmList, NSError * _Nullable error))block;

/**
 增加闹钟
 */
+ (void)addAlarm:(STPAlarmModel*)model block:(void (^)(STPAlarmModel *model,NSError *error)) block;

/**
 修改闹钟
 */
+ (void)editAlarm:(STPAlarmModel*)model block:(void (^)(BOOL isSuccess,NSError *error)) block;

/**
 删除闹钟
 */
+ (void)deleteAlarm:(NSArray*)alarmIds block:(void (^)(BOOL isSuccess,NSError *error)) block;
@end
NS_ASSUME_NONNULL_END
