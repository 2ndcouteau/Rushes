//
//  SecondViewController.swift
//  DailyMaouss
//
//  Created by swift on 20/12/14.
//  Copyright (c) 2014 noob42. All rights reserved.
//

import UIKit
import MapKit
import CoreLocation

class SecondViewController: UIViewController, MKMapViewDelegate, CLLocationManagerDelegate {
    
    
    @IBOutlet weak var theMapView: MKMapView!
    @IBOutlet weak var GPS_buton: UIButton!
    let locationManager = CLLocationManager()
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
    

        
        if (CLLocationManager.locationServicesEnabled())
        {
            locationManager.delegate = self
            locationManager.desiredAccuracy = kCLLocationAccuracyNearestTenMeters
            locationManager.requestAlwaysAuthorization()
            locationManager.startUpdatingLocation()
            
        }
        var latitude:CLLocationDegrees = 48.896447
        var longitute:CLLocationDegrees = 2.318602
        
        var latDelta:CLLocationDegrees = 0.00005
        var longDelta:CLLocationDegrees = 0.00010
        
        var theSpan:MKCoordinateSpan = MKCoordinateSpanMake(latDelta, longDelta)
        
        var churchLocation:CLLocationCoordinate2D = CLLocationCoordinate2DMake(latitude, longitute)
        
        var theRegion:MKCoordinateRegion = MKCoordinateRegionMake(churchLocation, theSpan)
        
        self.theMapView.setRegion(theRegion, animated: true)
        
        
        var theUlmMinsterAnnotation = MKPointAnnotation()
        
        theUlmMinsterAnnotation.coordinate = churchLocation
        
        theUlmMinsterAnnotation.title = "Ecole 42"
        theUlmMinsterAnnotation.subtitle = "Le Paradis des Petits Chats <3"

        self.theMapView.addAnnotation(theUlmMinsterAnnotation)
    }

    @IBAction func GPS(sender: UIButton) {
        let region = MKCoordinateRegion(center: theMapView.userLocation.coordinate,  span : MKCoordinateSpan(latitudeDelta: 0.01, longitudeDelta: 0.01))
        
            self.theMapView.setRegion(region, animated: true)
            self.theMapView.showsUserLocation = true
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBOutlet weak var Segment: UISegmentedControl!
    @IBAction func SegmentA(sender: UISegmentedControl) {
    
    switch Segment.selectedSegmentIndex {
    case 0:
    theMapView.mapType = MKMapType.Standard;
        break;
    case 1:
    theMapView.mapType = MKMapType.Satellite;
        break;
    case 2:
    theMapView.mapType = MKMapType.Hybrid;
        break;
    default :
        break;
        }
    }
}


