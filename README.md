# ASTR

A women's safety device implemented by using a taser on a wearable such as a digital watch.

### Unique Selling Points

* 1100 V taser shock
* Instant first line defence
* Portable and inconspicuous
* Safety precautions for activation
* Sends SOS message along with gps


## Implementation: 
We have implement a taser in a digital watch which can be activated using a ring by RF transmission. When the taser gets activated, the app send an SOS message to selected contacts along with GPS.

## Technology Stack  
PCB design
Fusion 360
Arduino 
MIT app devloper
Figma

### Tech1
Fusion 360 rendered design for both the watch and the ring

### Tech2

Circuit Analysis and PCB design 

## Screenshot of the Ring
<img src="https://user-images.githubusercontent.com/68746915/107868508-d6aba180-6eaa-11eb-91bb-396b0c947210.png">

## Screenshot of watch PCB 
<img src="https://user-images.githubusercontent.com/68746915/107868209-51bf8880-6ea8-11eb-8a28-116e3abec8a9.png" >

## Screenshot of the ASTR App
<img src="https://user-images.githubusercontent.com/68746915/107867870-b678e400-6ea4-11eb-97be-c45e67545abc.jpg" width="360" height="640">
  

## Prerequisites

* Arduino IDE
* Fusion 360
* Autodesk Eagle


```
Adafruit_SSD1306
Adafruit GFX
Adafruit_BusIO
```

## Challanges
* Linking the watch to the ring using RF
* Linking the app to the watch using bluetooth HC-05


## How to use our device
Connect the app to the smart watch to the app using bluetooth. In the case of any threat to activate the taser, press the slider on the ring. The taser can then give a shock of 500 V.


## Future Aspects
* Using nano capacitors we hope to create a small flexible PCB and implement this idea into the straps of the smart watch.
* Design and deploy an app which gives the live location of the person after the taser has been triggered.


## Authors
* [**Kanishk**](https://github.com/kanishk0501) 
* [**Shruti**](https://github.com/PotatoinPyjamas)
* [**Tanay**](https://github.com/makertanay)
 
