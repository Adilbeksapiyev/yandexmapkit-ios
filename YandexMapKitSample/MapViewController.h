/*
 * MapViewController.h
 *
 * This file is a part of the Yandex Map Kit.
 *
 * Version for iOS © 2011 YANDEX
 * 
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://legal.yandex.ru/mapkit/
 */

#import <UIKit/UIKit.h>
#import "YandexMapKit.h"

#import "PointAnnotation.h"

@interface MapViewController : UIViewController <YMKMapViewDelegate>

@property (nonatomic, retain) IBOutlet YMKMapView * mapView;

@end
