//
// Created by Leland Richardson on 12/27/15.
// Copyright (c) 2015 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>
#import <UIKit/UIKit.h>

#import "ABI11_0_0RCTConvert+MapKit.h"
#import "ABI11_0_0RCTComponent.h"
#import "ABI11_0_0AIRMapCoordinate.h"
#import "ABI11_0_0AIRMap.h"
#import "ABI11_0_0RCTView.h"


@interface ABI11_0_0AIRMapPolyline: MKAnnotationView <MKOverlay>

@property (nonatomic, weak) ABI11_0_0AIRMap *map;

@property (nonatomic, strong) MKPolyline *polyline;
@property (nonatomic, strong) MKPolylineRenderer *renderer;

@property (nonatomic, strong) NSArray<ABI11_0_0AIRMapCoordinate *> *coordinates;
@property (nonatomic, strong) UIColor *fillColor;
@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) CGFloat strokeWidth;
@property (nonatomic, assign) CGFloat miterLimit;
@property (nonatomic, assign) CGLineCap lineCap;
@property (nonatomic, assign) CGLineJoin lineJoin;
@property (nonatomic, assign) CGFloat lineDashPhase;
@property (nonatomic, strong) NSArray <NSNumber *> *lineDashPattern;

#pragma mark MKOverlay protocol

@property(nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property(nonatomic, readonly) MKMapRect boundingMapRect;
- (BOOL)intersectsMapRect:(MKMapRect)mapRect;
- (BOOL)canReplaceMapContent;

@end
