//
//  UPCMapsViewController.h
//  UPC
//
//  Created by Jose Gonzalez Gomez on 17/05/12.
//  Copyright (c) 2012 Universitat Politècnica de Catalunya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <RestKit/RestKit.h>
#import "UPCSearchResultsSelectionViewController.h"


@interface UPCMapsViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UPCSearchResultsSelectionDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapView;

@end
