
#ifndef HR_Macro_h
#define HR_Macro_h

///
#define SF(...) [NSString stringWithFormat:__VA_ARGS__]

///
#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"--------------------------- [HR-LOG] --------------------------- \n[T]:%s  %s\n[F]:%s\n[M]:%s\n[L]:%d\n[C]:%s\n", __DATE__, __TIME__, __FILE__,__FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

///
#define RGB(r,g,b)          [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define RGBA(r,g,b,a)       [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]
#define RGB0X(rgbValue)     [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

///
#define S_BOUNDS    [UIScreen mainScreen].bounds
#define S_WIDTH     [UIScreen mainScreen].bounds.size.width
#define S_HEIGHT    [UIScreen mainScreen].bounds.size.height

///
#define SBInit(name) [[UIStoryboard storyboardWithName:name bundle:nil] instantiateInitialViewController]
#define SBID(name, identifier)   [[UIStoryboard storyboardWithName:name bundle:nil] instantiateViewControllerWithIdentifier:identifier]

#define SuccessBlock void(^)(void)
#define FailureBlock void(^)(NSString *errMsg)

#endif
