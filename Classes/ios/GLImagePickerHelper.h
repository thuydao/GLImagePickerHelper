//
//  GLImagePickerHelper.h
//  Pods
//
//  Created by Nanba Takeo on 2015/04/07.
//
//

#import <Foundation/Foundation.h>

@interface GLImagePickerHelper : NSObject

@property (nonatomic) UIViewController *cameraViewController;
@property (nonatomic) CALayer *fillLayer;

- (void)setup;
- (void)cleanup;
- (NSDictionary *)didFinishPickingMediaWithInfo:(NSDictionary *)info;
- (void)willShowViewController:(UIViewController *)viewController;

@end

@interface UIView (layer)

- (CAShapeLayer *)addCircleHoleLayer;
- (CAShapeLayer *)addCircleHoleLayerWithRadius:(CGFloat)radius;
- (CAShapeLayer *)addCircleHoleLayerWithRadius:(CGFloat)radius topMargin:(CGFloat)topMargin;

@end

@interface UIView (subview)

- (UIView *)subviewAtIndex:(NSInteger)index;
- (UIView *)subviewWithClassName:(NSString *)targetClassName;

@end

@interface UIImage (transform)

- (UIImage *)makeCornerRound:(CGFloat)cornerRadius;

@end
