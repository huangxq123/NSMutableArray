//
//  Macros.h
//  JSZB_Demo
//
//  Created by huangxiaoqiang on 14-8-7.
//  Copyright (c) 2014年 huangxiaoqiang. All rights reserved.
//

#ifndef JSZB_Demo_Macros_h
#define JSZB_Demo_Macros_h
//测试环境
#define TEST_URL_XJH @""
//生产环境


//iPhone适配
#define iPhone4_small ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(320, 480), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6p ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
#define isIpadRetina ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(2048, 1536), [[UIScreen mainScreen] currentMode].size) : NO)
#define isIpad ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(1024, 768), [[UIScreen mainScreen] currentMode].size) : NO)

#define Screen_height  [[UIScreen mainScreen] bounds].size.height
#define Screen_width   [[UIScreen mainScreen] bounds].size.width
#define CurrentIOSVersion  ([[[UIDevice currentDevice] systemVersion] floatValue])

#define k1  Screen_width/320.0
#define k2  Screen_height/568.0

#define SUB_H  (CurrentIOSVersion>=7.0 ? 20.0f:0)
#define SUB_Y  (CurrentIOSVersion>=7.0 ? 10.0f:0)

//备用比例因子
#define k_w (Screen_height>480 ? k1:1)
#define k_h (Screen_height>480 ? k2:1)

//无操作时长限制
#define UNPLAY_LIMIT_TIME 0

//NavBar高度
#define NavigationBar_HEIGHT 44


//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//----------------------图片----------------------------

//读取本地图片
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

//定义UIImage对象
#define IMAGE(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]

//定义UIImage对象
#define ImageNamed(_pointer) [UIImage imageNamed:[UIUtil imageName:_pointer]]

#define AddImage(url) [UIImage imageWithData:[NSData dataWithContentsOfURL:url]

//获取当前语言
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//清除背景色
#define CLEARCOLOR [UIColor clearColor]

//方正黑体简体字体定义
#define FONT(F) [UIFont fontWithName:@"FZHTJW--GB1-0" size:F]

//NSUserDefaults 实例化
#define USER_DEFAULT [NSUserDefaults standardUserDefaults]


CG_INLINE CGRect
CGRectMake6p(CGFloat x, CGFloat y, CGFloat width, CGFloat height)
{
    CGRect rect;
    rect.origin.x = x*k1; rect.origin.y = y*k2;
    rect.size.width = width*k1; rect.size.height = height*k2;
    return rect;
}
CG_INLINE CGRect
CGRectMake45V(CGFloat x, CGFloat y, CGFloat width, CGFloat height)
{
    CGRect rect;
    rect.origin.x = x*k1; rect.origin.y = y*k2;
    rect.size.width = width*k2; rect.size.height = height*k2;
    return rect;
}
CG_INLINE CGRect
CGRectMakeNoScale(CGFloat x, CGFloat y, CGFloat width, CGFloat height)
{
    CGRect rect;
    rect.origin.x = x; rect.origin.y = y;
    rect.size.width = width; rect.size.height = height;
    return rect;
}
#define RGB(r,g,b,a)	[UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
/********************背景颜色*****************/
//标题文字颜色
#define LABEL_COLOR  [UIColor colorWithRed:51.0f/255.0f green:51.0f/255.0f blue:51.0f/255.0f alpha:1]
//副标题文字颜色
#define TINY_LABEL_COLOR [UIColor colorWithRed:153.0f/255.0f green:153.0f/255.0f blue:153.0f/255.0f alpha:1]
//控制器背景色
#define CONTROLLER_BACKGROUNDCOLOR  [UIColor colorWithRed:240.0f/255.0f green:245.0f/255.0f blue:247.0f/255.0f alpha:1]
//重要字段颜色（钱、利率、时间）
#define MONEY_COLOR [UIColor colorWithRed:255.0f/255.0f green:102.0f/255.0f blue:0 alpha:1]
//圆圈内百分比颜色
#define CIRCLE_COLOR [UIColor colorWithRed:0 green:63.0f/255.0f blue:50.0f/255.0f alpha:1]
//编号颜色
#define NUMBER_COLOR [UIColor colorWithRed:40.0f/255.0f green:131.0f/255.0f blue:112.0f/255.0f alpha:1]
//人民币符号颜色
#define RMBSymbol_COLOR [UIColor colorWithRed:83.0f/255.0f green:83.0f/255.0f blue:83.0f/255.0f alpha:1]
//基石自有颜色
#define JSOL_COLOR [UIColor colorWithRed:33.0/255 green:111.0/255 blue:92.0/255 alpha:0]

#define TinyGray_COLOR [UIColor colorWithRed:173.0/255 green:173.0/255 blue:173.0/255 alpha:1]

#define LABEL_COLOR  [UIColor colorWithRed:51.0f/255.0f green:51.0f/255.0f blue:51.0f/255.0f alpha:1]
#define TINY_LABEL_COLOR [UIColor colorWithRed:153.0f/255.0f green:153.0f/255.0f blue:153.0f/255.0f alpha:1]

/********************接口名称()29*****************/
//登陆
#define LOGIN @"loginAction"
//注册
#define REGISTER @"registerAction"
//发送手机验证码
#define SEND_CODE @"sendCodeAction"
//首页
#define INVESTMENT_DATA @"investmentDataAction"
//投资列表
#define INVESTMENT_LIST @"investmentListActionPT"
//总投资表
//#define INVESTMENT_LIST @"investmentListActionAll"//测试
//普通标列表
#define INVESTMENT_LIST_PT @"investmentListActionPT"
//活动标投资列表
#define INVESTMENT_LIST_HD @"investmentListActionHD"
//新手标投资列表
#define INVESTMENT_LIST_XS @"investmentListActionXS"
//投标记录
#define PROJECT_RECORD @"projectRecordAction"
//线下预约
#define OFFLINE_RESERVE @"offlineReserveAction"
//账户信息
#define ACCOUNT_MESSAGE @"accountMessageAction"
//已投项目列表
#define HAS_INVESTMENT_PROJECT @"hasInvestmentProjectAction"
//还款计划
#define REPAYMENT_PLAN @"repaymentPlanAction"
//资金记录列表
#define FUND_RECORD @"fundRecordListAction"
//积分列表
#define INTERGRATION_LIST @"intergrationAction"
//子推荐人列表
#define SON_LIST @"sonListAction"
//门店列表
#define STORE_LIST @"storeListAction"
//修改密码
#define UPDATE_PASSWORD @"updatePasswordAction"
//修改手机号码
#define UPDATE_MOBILE @"updateMobileNumberAction"
//找回密码
#define BACK_PASSWORD @"backPasswordAction"
//版本更新
#define UPDATA_VERSION @"updateAppAction"
//用户提现的银行卡信息
#define GET_BANKNO @"getBankNo"
//获取用户提现相关信息
#define GET_PLATFORMDATA  @"getPlatformData"
//标的相关信息
#define GET_AOC @"getAoc"
//判定号码是否存在
#define ISEXISTSPHONE    @"isExistsPhoneByMobile"
//判定用户名是否存在
#define ISEXISTUSERNAME  @"isExistsUserNameByMobile"
//验证账号和手机号码是否匹配
#define ISPHONEMATCHUSERNAME @"isExistsAccountAndByMobile"
//判定验证码是否合法
#define PHONECODEVALIDA @"phoneCodeValida"
//获取代金券列表
#define GETVOUCHER @"getVoucher"
//代金券支付
#define VOUCHERPAY @"voucherPay"
//强制更新
#define UPDATEACTION @"updateAppAction"
//banner
#define GETBANNER @"getBannerImgUrl"
//是否是新手
#define ISNEWHAND @"isInvestmentProjectAction"
//通过服务端判定能否使用代金券
#define IFCoupons @"isCouponslist"

//LocalString
//其他
#define DATAERROR @"数据异常"
#define NET_ERROR @"网络连接异常"
#define JSZXYCF @"基石在线·E财富"
#define WYTZ @"我要投资"
#define PLATFORMDATATITLE @[@"累计投资",@"用户收益",@"注册人数"]
#define BIAO_LIST_SECTION_TITLE @[@"项目列表",@"新手专区",@"活动专区"]
#define HUIKUAN_WANJIE_TITLE @[@"回款中",@"已完结"]
#define PAY_TITLE @[@"融资金额:",@"年化收益:",@"总期数:"]
#define LEFT_MENU @[@"   我要投资",@"   充值",@"   提现",@"   我的账户",@"   已投项目",@"   资金记录",@"   积分乐园",@"   线下门店",@"   更多设置"]
#define ONLINE_OFFLINE_INVEST_TITLE @[@"在线投资",@"门店列表"]
#define RECHARGE_WORD @"温馨提示\n 1、投资人充值免费.\n 2、最低充值金额100元.\n 3、请投资人根据投资计划合理充值,为防止套现,所充资金必须经投资人回款后才能提现.\n 4、严禁利用充值功能进行信用卡功能套现、转账、洗钱等行为.\n 5、充值期间,请勿退出客户端,待充值成功提示并返回后,所充资金才能入账,如有疑问,请联系客服:400-027-0919.\n 6、充值需开通银行卡网上支付功能,如有疑问请咨询开户行客服.\n"
#define WITHDRAW_WORD @"温馨提示\n 1、用户开通第三方支付账户,并设置提现银行卡后,才能进行提现操作.\n 2、提现手续费为每笔2元.\n 3、为防止恶意套现,不可提现未经投资的款项.\n 4、资金到达用户账户的当日（包括周六,周日,法定节假日)即可发起提现申请.\n 5、所有提现操作均是从汇付天下账户到提现银行账户,由于第三方结算方面的原因,用户提出提现申请后,一般为第二个工作日到账.具体到账时间以汇付天下时间为准.\n "
#endif
