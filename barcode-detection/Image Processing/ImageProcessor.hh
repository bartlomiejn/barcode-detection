//
//  ImageProcessor.h
//  barcode-detection
//
//  Created by Bartłomiej Nowak on 11.02.2018.
//  Copyright © 2018 Bartłomiej Nowak. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageProcessor : NSObject
- (instancetype _Nonnull)init;
- (UIImage* _Nullable)barcodeFromImage:(UIImage* _Nonnull)image;
@end
