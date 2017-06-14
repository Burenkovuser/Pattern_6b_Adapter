//
//  AppDelegate.h
//  Adapter2
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

/*Сам паттерн состоит из трех частей: Цели (target), Адаптера (adapter), и адаптируемого (adaptee).
 В нашей с вами проблеме:
 1. Target–ноутбуксостаройзарядкой
 2. Adapter–переходник.
 3. Adaptee – розетка с квадртаными дырками.
 */

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

