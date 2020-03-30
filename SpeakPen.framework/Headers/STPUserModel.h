//
//  STPUserModel.h
//  Pods
//
//  Created by kris on 16/11/12.
//
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@class STPDeviceModel;

//用户基本信息
@interface STPUserModel : NSObject
@property (nonatomic,strong) NSString *userid;//id
@property (nonatomic,strong) NSString *headimg;//头像
@property (nonatomic,strong) NSString *name;//昵称
@property (nonatomic,strong) NSArray <STPDeviceModel*> *devices;//用户所拥有的设备
@end

//宝宝信息模型
@interface STPBabyModel : NSObject
@property(nonatomic,strong) NSString *babyId;// 宝宝ID
@property(nonatomic,strong) NSString *birthday;//生日 注意格式是:"YYYY-MM-dd"
@property(nonatomic,strong) NSString *img;// 头像
@property(nonatomic,strong) NSString *nickname;//昵称
@property(nonatomic,strong) NSString *gender;//性别 注意格式是"boy"/"girl"
@property(nonatomic,strong) NSString *tags;//宝宝标签 注意格式采用"/"分割
@end

//宝宝标签
@interface STPBabyTagModel :NSObject
@property(nonatomic,assign) NSInteger val; // 标签比重 百分制
@property(nonatomic,strong) NSString *name;//标签名称
@end

//宝宝成长资源
@interface STPBabyResModel :NSObject
@property(nonatomic,copy) NSString *rID;//资源ID
@property(nonatomic,copy) NSString *aID;// 专辑ID
@property(nonatomic,copy) NSString *title;//资源名称
@property(nonatomic,copy) NSString *img;//专辑图片
@property(nonatomic,strong) NSArray<NSString*>*tags;//模块标签
@end

//宝宝心理模块
@interface STPBabyModModel : NSObject
@property(nonatomic,assign) NSInteger score;// 模块比重 百分制
@property(nonatomic,strong) NSString *features;// 模块内容
@property(nonatomic,strong) NSString *name;//模块数组
@property(nonatomic,strong) NSArray<STPBabyResModel*> *resources;//宝宝推荐资源
@property(nonatomic,strong) NSArray<STPBabyTagModel*> *tags;//模块标签
@end

//宝宝成长模型
@interface STPBabyGrowthModel : NSObject
@property(nonatomic,strong) NSString *des;// 阶段特征
@property(nonatomic,strong) NSString *tips;// 早教贴士
@property(nonatomic,strong) NSArray<STPBabyModModel*> *mod;//心理模型模块数组
@end
@interface STPAvatarModel: NSObject
@property(nonatomic,strong) NSString *img;// 图片名
@property(nonatomic,strong) NSString *large;//大图url
@property(nonatomic,strong) NSString *thumb;//小图url
@end
NS_ASSUME_NONNULL_END
