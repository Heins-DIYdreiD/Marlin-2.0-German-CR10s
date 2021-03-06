/**  Marlin 3D Printer Firmware GNU & Copyright Info
 * 
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Dieses Programm ist freie Software: Sie können es weiterverteilen und/oder modifizieren
 * es unter den Bedingungen der GNU General Public License, wie es die
 * Free Software Foundationder veröffentlichte , entweder Version 3 der Lizenz, oder
 * (nach Ihrer Wahl) jede spätere Version.
 *
 * Dieses Programm wird in der Hoffnung verteilt, dass es für euch nützlich sein wird,
 * aber OHNE JEDE GARANTIE; auch ohne die stillschweigende Garantie von einer 
 * Gebrauchstauglichkeit, oder einer Gewährleistungen, der Eignung für einen speziellen Zweck.
 * Siehe die GNU General Public License für weitere Details.
 *
 * Sie sollten eine Kopie der GNU General Public License erhalten haben
 * zusammen mit diesem Programm. Falls nicht, siehe <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**  Configuration.h -- Abschnitte
 *
 * Basic settings such as:
 *
 * - Type of electronics
 * - Type of temperature sensor
 * - Printer geometry
 * - Endstop configuration
 * - LCD controller
 * - Extra features
 *
 * Erweiterte Einstellungen sind in der Configuration_adv.h zu finden.
 */
#define CONFIGURATION_H_VERSION 020007

//============================= Getting Started =============================
//===========================================================================

/**  Hier sind einige Standardlinks, um den Drucker kalibrieren zu können:
 * 
 * https://reprap.org/wiki/Calibration
 * https://youtu.be/wAL9d7FgInk
 * http://calculator.josefprusa.cz
 * https://reprap.org/wiki/Triffid_Hunter%27s_Calibration_Guide
 * https://www.thingiverse.com/thing:5573
 * https://sites.google.com/site/repraplogphase/calibration-of-your-reprap
 * https://www.thingiverse.com/thing:298812
 */

//============================= DELTA Printer =================================
//=============================================================================
// Für einen Delta-Drucker beginnen Sie mit einer der Konfigurationsdateien im
// config/examples/delta Verzeichnis und passen sie für Ihren Rechner an.

//============================= SCARA Printer =================================
//=============================================================================
// Für einen Scara-Drucker beginnen Sie mit einer der Konfigurationsdateien im
// config/examples/SCARA Verzeichnis und passen sie für Ihren Rechner an.

// #----------------------------------------------=====  @section info  =====----------------------------------------------#

// Authoren Info dieses Builds das beim Bootvorgang und dem Befehl M115 angezeigt wird.
// Wer machte die Änderungen.
#define STRING_CONFIG_H_AUTHOR "H1.DIY3D"

// Pfad vom Wurzel-Verzeichnises (root) aus.
//#define CUSTOM_VERSION_FILE Version.h 

/**  Verkäufer / Händler Information ***
 * 
 * Mit Marlin können Sie ein benutzerdefiniertes Boot-Image für Grafik-LCDs hinzufügen.
 * Mit dieser Option zeigt Marlin zuerst Ihren benutzerdefinierten Bildschirm an
 * durch das standardmässige Marlin Logo mit Versionsnummer und Web-URL.
 *
 * Wir hoffen es ermutigt Sie, die Vorteile dieser neuen Funktion zu nutzen und bitten 
 * Bitte respektvoll darum, den unveränderten Marlin-Bootbildschirm beizubehalten. 
 */

// Zeige die Marlin bootscreen während des Startvorgangs ** ENABLE FOR PRODUCTION **
//#define SHOW_BOOTSCREEN

// Zeige das Bitmap in Marlin/_Bootscreen.h während des Startvorgangs.
//#define SHOW_CUSTOM_BOOTSCREEN

// Zeige das Bitmap in Marlin/_Statusscreen.h während des Startvorgangs.
//#define CUSTOM_STATUS_SCREEN_IMAGE

// #----------------------------------------------=====  @section machine  =====-------------------------------------------#

/**  Serielle Schnittstellenkomunikation
 * 
 * Wählen Sie die serielle Schnittstelle auf der Platine, 
 * die für die Kommunikation mit dem Host verwendet werden soll.
 * Dies ermöglicht den Anschluss von WLAN-Adaptern (zum Beispiel) an nicht standardmässige Port-Pins.
 * Serielle Schnittstelle -1 ist die USB emulierte serielle Schnittstelle, falls vorhanden.
 * Anmerkung: Der erste serielle Port (-1 oder 0) wird immer vom Arduino Bootloader verwendet.
 *
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
#define SERIAL_PORT -1

/**  Serielle Schnittstelle Port 2
 * 
 * Wählen Sie die zweite serielle Schnittstelle auf der Platine, 
 * die für die Kommunikation mit dem Host verwendet werden soll.
 * Anmerkung: Der zweite Port ist meist der Display-Port.
 *
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
#define SERIAL_PORT_2 0

/**  Diese Einstellung legt die Kommunikationsgeschwindigkeit des Druckers fest.
* 
* 250000 funktioniert in den meisten Fällen, aber Sie könnten eine geringere Geschwindigkeit versuchen,
* wenn Sie häufige Aussetzer während des Host-Drucks haben.
* Sie können bis zu 1000000 versuchen, um die SD-Dateiübertragung zu beschleunigen.
* Die Bautrate muss auch zu dem angeschlossenem Display passen. 
* Anmerkung: Beide Ports benutzen die eingestellte Bautrate
 *
 * :[2400, 9600, 19200, 38400, 57600, 115200, 250000, 500000, 1000000]
 */
#define BAUDRATE 250000

// Aktivieren der seriellen Bluetooth Schnittstelle bei AT90USB Controllern
//#define BLUETOOTH

// Wähle den Boardname aus der boards.h der zu deinem Board passt.
#ifndef MOTHERBOARD1
  #define MOTHERBOARD BOARD_BTT_SKR_V1_4_TURBO
#endif

// Der Name wird in der LCD-Anzeige in der "Ready" message und im Info Menu angezeigt.
#define CUSTOM_MACHINE_NAME "29/04"

// Die eindeutige ID des Druckers, die von einigen Programmen verwendet wird,
// um zwischen einzelen Geräten zu unterscheiden zu können.
// Wählen Sie Ihre eigene ID oder nutzen Sie einen Service wie https://www.uuidgenerator.net/version4
//#define MACHINE_UUID "00000000-0000-0000-0000-000000000000"

// #----------------------------------------------=====  @section extruder  =====------------------------------------------#

// Wie viele Extruder sind im Drucker eingebaut.
// :[0, 1, 2, 3, 4, 5, 6, 7, 8]
#define EXTRUDERS 1

// Normaler Filamentdurchmesser (1.75, 2.85, 3.0, ...). Used for Volumetric, Filament Width Sensor, etc.
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

// Für Cyclops oder jeder andere "Multi-Extruder", der nur mit einer einzelnen Düse betrieben wird.
//#define SINGLENOZZLE

// Temperatur und Lüfterdrehzahl bei Werkzeugwechsel speichern und wiederherstellen.
// Standby für das nicht gewählte Werkzeug mit M104/106/109 T...
#if ENABLED(SINGLENOZZLE) // Temperatur und Lüfterdrehzahl
  //#define SINGLENOZZLE_STANDBY_TEMP
  //#define SINGLENOZZLE_STANDBY_FAN
#endif

/** Průša MK2 Einzeldüsen-Multi-Material-Multiplexer, und Varianten.
 * 
 * Mit diesem Gerät kann ein Schrittschalttreiber auf einer Steuerplatine
 * zwei bis acht Schrittmotoren, einen nach dem anderen, in einer Weise, die für
 * für Extruder.
 *
 * Mit dieser Option kann der Multiplexer nur bei einem Werkzeugwechsel schalten.
 * Weitere Optionen zur Konfiguration von benutzerdefinierten E-Moves sind in Vorbereitung.
 */
//#define MK2_MULTIPLEXER
#if ENABLED(MK2_MULTIPLEXER) // Standard-DIO-Selektor-Pins überschreiben
  // Überschreiben Sie hier die Standard-DIO-Selektor-Pins, falls erforderlich.
  // Einige Pin-Dateien bieten möglicherweise Standardwerte für diese Pins.
  //#define E_MUX0_PIN 40  // Wird immer benötigt
  //#define E_MUX1_PIN 42  // Needed for 3 to 8 inputs
  //#define E_MUX2_PIN 44  // Needed for 5 to 8 inputs
#endif

/**  Průša Multi-Material Unit v2
 * 
 * Benötigt NOZZLE_PARK_FEATURE zum Parken des Druckkopfes bei Ausfall der MMU-Einheit.
 * Diese Auswahl benötigt EXTRUDERS = 5
 * 
 * siehe auch Configuration.h Zeile 1520-1541
 * siehe auch Configuration_adv.h
 */
//#define PRUSA_MMU2

// Dual Extruder die einen Stepper Motor verwenden.
//#define SWITCHING_EXTRUDER

#if ENABLED(SWITCHING_EXTRUDER)
  #define SWITCHING_EXTRUDER_SERVO_NR 0
  #define SWITCHING_EXTRUDER_SERVO_ANGLES { 0, 90 } // Angles for E0, E1[, E2, E3]
  #if EXTRUDERS > 3
    #define SWITCHING_EXTRUDER_E23_SERVO_NR 1
  #endif
#endif

// Eine Doppeldüsensytem, bei dem ein Motor verwendet wird, um eine (oder beide) der Düsen anzuheben/abzusenken
// Die Ruhende (aber heiße) Nozzle wird angehoben um die Duckoberfläche nicht zu beschädigen. 
// Möglichweise mit Nozzlespitzenabdeckung gegen Filamentautritt (Ooze Cover)
//#define SWITCHING_NOZZLE

#if ENABLED(SWITCHING_NOZZLE) // Doppelnozzle
  #define SWITCHING_NOZZLE_SERVO_NR 0
  //#define SWITCHING_NOZZLE_E1_SERVO_NR 1          // Wenn zwei Servos verwendet werden, wird der Index des zweiten verwendet.
  #define SWITCHING_NOZZLE_SERVO_ANGLES { 0, 90 }   // Winkel für E0, E1 (Einzelservo) oder gesenkt/gehoben (Doppelservo)
#endif

/**  Zwei separate X-Wagen mit Solenoidem Andockmechanismus
 * Zwei separate X-Wagen mit eigenen Extrudern, die an den X Endpositionen verweilen und über Solenoiden (Magnetspule)
 * Andockmechanismen mitgenommen werden, die sich an einem Schlitten befinden. Erfordert SOL1_PIN und SOL2_PIN.
 */
//#define PARKING_EXTRUDER

/**  Zwei separate X-Wagen Magnetischem Andockmechanismus
 * Zwei separate X-Wagen mit eigenen Extrudern, die an den X Endpositionen verweilen und über magnetischen
 * Andockmechanismen mitgenommen werden, die sich an einem Schlitten befinden.
 *
 * project   : https://www.thingiverse.com/thing:3080893
 * movements : https://youtu.be/0xCEiG9VS3k
 *             https://youtu.be/Bqbcs0CU2FE
 */
//#define MAGNETIC_PARKING_EXTRUDER

#if EITHER(PARKING_EXTRUDER, MAGNETIC_PARKING_EXTRUDER)

  #define PARKING_EXTRUDER_PARKING_X { -78, 184 }     // X-Positionen für die Parkposition der Extruder
  #define PARKING_EXTRUDER_GRAB_DISTANCE 1            // (mm) Abstand zum Überfahren des Parkpunkts, um den Extruder zu greifen
  //#define MANUAL_SOLENOID_CONTROL                   // Manuelle Steuerung des Solenoidem Andockmechanismuses mit M380 S / M381

  #if ENABLED(PARKING_EXTRUDER)

    #define PARKING_EXTRUDER_SOLENOIDS_INVERT           // Wenn die Invertierung aktiviert, wird der Magnet bei angelegter Spannung NICHT magnetisiert
    #define PARKING_EXTRUDER_SOLENOIDS_PINS_ACTIVE LOW  // LOW- oder HIGH-Pin-Signal Schaltet die Spule
    #define PARKING_EXTRUDER_SOLENOIDS_DELAY 250        // (ms) Verzögerung für Magnetfeld. Keine Verzögerung, wenn Wert 0 oder nicht definiert.
    //#define MANUAL_SOLENOID_CONTROL                   // Manuelle Steuerung des Solenoidem Andockmechanismuses mit M380 S / M381

  #elif ENABLED(MAGNETIC_PARKING_EXTRUDER)

    #define MPE_FAST_SPEED      9000      // (mm/min) Speed for travel before last distance point
    #define MPE_SLOW_SPEED      4500      // (mm/min) Speed for last distance travel to park and couple
    #define MPE_TRAVEL_DISTANCE   10      // (mm) Last distance point
    #define MPE_COMPENSATION       0      // Offset Compensation -1 , 0 , 1 (multiplier) only for coupling

  #endif

#endif

/**
 * Werkzeugwechselkopf
 *
 * Unterstützung für austauschbare und andockbare Werkzeugköpfe, wie z. B.
 * der E3D-Werkzeugwechsler. Diese Werkzeugköpfe werden mit einem Servo verriegelt.
 */
//#define SWITCHING_TOOLHEAD

/**
 * Magnetischer Werkzeugwechselkopf
 *
 * Unterstützt austauschbare und andockbare Werkzeugköpfe mit einem magnetischen
 * Andockmechanismus mit Bewegung und ohne Servo.
 */
//#define MAGNETIC_SWITCHING_TOOLHEAD

/**
 * Elektromagnetischer Werkzeugwechselkopf
 *
 * Parken für CoreXY / HBot-Kinematik.
 * Werkzeugköpfe werden an einer Kante geparkt und mit einem Elektromagneten gehalten.
 * Unterstützt mehr als 2 Werkzeugköpfe. See https://youtu.be/JolbsAKTKf4
 */
//#define ELECTROMAGNETIC_SWITCHING_TOOLHEAD

#if ANY(SWITCHING_TOOLHEAD, MAGNETIC_SWITCHING_TOOLHEAD, ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
  #define SWITCHING_TOOLHEAD_Y_POS          235         // (mm) Y Position der Werkzeugkopf Dock
  #define SWITCHING_TOOLHEAD_Y_SECURITY      10         // (mm) Sicherheitsbereich Y Achse
  #define SWITCHING_TOOLHEAD_Y_CLEAR         60         // (mm) Minimum Entfernung zwischen Dock und einer freien X-Achse
  #define SWITCHING_TOOLHEAD_X_POS          { 215, 0 }  // (mm) X-Positionen zum Abstellen der Extruder
  #if ENABLED(SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_SERVO_NR       2         // Index des Servoanschlusses
    #define SWITCHING_TOOLHEAD_SERVO_ANGLES { 0, 180 }  // (Grad) Winkelposition Verriegelt, Entriegelt
  #elif ENABLED(MAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Y_RELEASE      5         // (mm) Sicherheitsentfernung Y-Achse
    #define SWITCHING_TOOLHEAD_X_SECURITY   { 90, 150 } // (mm) Sicherheitsentfernung X-Achse (T0,T1)
    //#define PRIME_BEFORE_REMOVE                       // Aktiviere den Kopf bevor er vom Dock entnommen wird
    #if ENABLED(PRIME_BEFORE_REMOVE)
      #define SWITCHING_TOOLHEAD_PRIME_MM           20  // (mm)   Werkzeugkopf Hauptlänge
      #define SWITCHING_TOOLHEAD_RETRACT_MM         10  // (mm)   Retract after priming length
      #define SWITCHING_TOOLHEAD_PRIME_FEEDRATE    300  // (mm/min) Extruder prime feedrate
      #define SWITCHING_TOOLHEAD_RETRACT_FEEDRATE 2400  // (mm/min) Extruder retract feedrate
    #endif
  #elif ENABLED(ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Z_HOP          2         // (mm) Z raise for switching
  #endif
#endif

/**
 * "Mischextruder"
 *  - Fügt die G-Codes M163 und M164 hinzu, um die aktuellen Mischfaktoren einzustellen und zu "bestätigen".
 *  - Erweitert die Stepping-Routinen, um mehrere Stepper proportional zur Mischung zu bewegen.
 *  - Optionale Unterstützung für die virtuellen Werkzeuge der Repetier-Firmware 'M164 S<index>'.
 *  - Diese Implementierung unterstützt bis zu zwei Mischextruder.
 *  - Aktivieren Sie DIRECT_MIXING_IN_G1 für M165 und Mischen in G1 (aus der Referenzimplementierung von Pia Taubert).
 */
//#define MIXING_EXTRUDER
#if ENABLED(MIXING_EXTRUDER)
  #define MIXING_STEPPERS 2        // Anzahl der Steppermotoren die sich im Mischextruder befinden.
  #define MIXING_VIRTUAL_TOOLS 16  // Verwendung der Virtuellen Werkzeugmethode mit M163 und M164
  //#define DIRECT_MIXING_IN_G1    // ABCDHI-Mischfaktoren in G1-Bewegungsbefehlen zulassen
  //#define GRADIENT_MIX           // Support for gradient mixing with M166 and LCD
  #if ENABLED(GRADIENT_MIX)
    //#define GRADIENT_VTOOL       // Add M166 T to use a V-tool index as a Gradient alias
  #endif
#endif

// Offset der Extruder (nicht auskommentieren, wenn Sie mehr als einen verwenden und 
// sich auf die Positionierung durch die Firmware beim Wechsel verlassen).
// Der Offset muss X=0, Y=0 für den Extruder 0 hotend (Standardextruder) sein.
// Für die anderen Hotends ist es ihr Abstand vom Extruder 0 Hotend.
//#define HOTEND_OFFSET_X { 0.0, 20.00 } // (mm) relative X-offset for each nozzle
//#define HOTEND_OFFSET_Y { 0.0, 5.00 }  // (mm) relative Y-offset for each nozzle
//#define HOTEND_OFFSET_Z { 0.0, 0.00 }  // (mm) relative Z-offset for each nozzle

// #----------------------------------------------=====  @section machine  =====-------------------------------------------#

/**
 * Steuerung der Spannungsversorgung
 *
 * Aktivieren und verbinden Sie die Spannungsversorgung mit dem PS_ON_PIN.
 * Legen Sie fest, ob die Spannungsversorgung aktiv HIGH oder aktiv LOW ist.
 */
//#define PSU_CONTROL
//#define PSU_NAME "Power Supply"

#if ENABLED(PSU_CONTROL)
  #define PSU_ACTIVE_STATE LOW      // Set 'LOW' for ATX, 'HIGH' for X-Box

  //#define PSU_DEFAULT_OFF         // Keep power off until enabled directly with M80
  //#define PSU_POWERUP_DELAY 250   // (ms) Delay for the PSU to warm up to full power

  //#define AUTO_POWER_CONTROL      // Enable automatic control of the PS_ON pin
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS         // Turn on PSU if fans need power
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define AUTO_POWER_CHAMBER_FAN
    //#define AUTO_POWER_E_TEMP        50 // (°C) Turn on PSU over this temperature
    //#define AUTO_POWER_CHAMBER_TEMP  30 // (°C) Turn on PSU over this temperature
    #define POWER_TIMEOUT 30
  #endif
#endif

// #----------------------------------------------=====  @section temperature  =====---------------------------------------#

/**
 * --Standard sind 4.7kohm PullUp's!-- 1kohm PullUp's können, unter Verwendung des richtigen Widerstands 
 * und der folgenden Tabelle, am Hotend-Sensor verwendet werden, 
 *
 * Temperature sensors available:
 *
 *    -5 : PT100 / PT1000 with MAX31865 (only for sensors 0-1)
 *    -3 : thermocouple with MAX31855 (only for sensors 0-1)
 *    -2 : thermocouple with MAX6675 (only for sensors 0-1)
 *    -4 : thermocouple with AD8495
 *    -1 : thermocouple with AD595
 *     0 : not used
 *     1 : 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
 *   331 : (3.3V scaled thermistor 1 table for MEGA)
 *   332 : (3.3V scaled thermistor 1 table for DUE)
 *     2 : 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
 *   202 : 200k thermistor - Copymaster 3D
 *     3 : Mendel-parts thermistor (4.7k pullup)
 *     4 : 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
 *     5 : 100K thermistor - ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan, J-Head, and E3D) (4.7k pullup)
 *   501 : 100K Zonestar (Tronxy X3A) Thermistor
 *   502 : 100K Zonestar Thermistor used by hot bed in Zonestar Průša P802M
 *   512 : 100k RPW-Ultra hotend thermistor (4.7k pullup)
 *     6 : 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
 *     7 : 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
 *    71 : 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
 *     8 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
 *     9 : 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
 *    10 : 100k RS thermistor 198-961 (4.7k pullup)
 *    11 : 100k beta 3950 1% thermistor (Used in Keenovo AC silicone mats and most Wanhao i3 machines) (4.7k pullup)
 *    12 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
 *    13 : 100k Hisens 3950  1% up to 300°C for hotend "Simple ONE " & "Hotend "All In ONE"
 *    15 : 100k thermistor calibration for JGAurora A5 hotend
 *    18 : ATC Semitec 204GT-2 (4.7k pullup) Dagoma.Fr - MKS_Base_DKU001327
 *    20 : Pt100 with circuit in the Ultimainboard V2.x with 5v excitation (AVR)
 *    21 : Pt100 with circuit in the Ultimainboard V2.x with 3.3v excitation (STM32 \ LPC176x....)
 *    22 : 100k (hotend) with 4.7k pullup to 3.3V and 220R to analog input (as in GTM32 Pro vB)
 *    23 : 100k (bed) with 4.7k pullup to 3.3v and 220R to analog input (as in GTM32 Pro vB)
 *    30 : Kis3d Silicone heating mat 200W/300W with 6mm precision cast plate (EN AW 5083) NTC100K / B3950 (4.7k pullup)
 *   201 : Pt100 with circuit in Overlord, similar to Ultimainboard V2.x
 *    60 : 100k Maker's Tool Works Kapton Bed Thermistor beta=3950
 *    61 : 100k Formbot / Vivedino 3950 350C thermistor 4.7k pullup
 *    66 : 4.7M High Temperature thermistor from Dyze Design
 *    67 : 450C thermistor from SliceEngineering
 *    70 : the 100K thermistor found in the bq Hephestos 2
 *    75 : 100k Generic Silicon Heat Pad with NTC 100K MGB18-104F39050L32 thermistor
 *    99 : 100k thermistor with a 10K pull-up resistor (found on some Wanhao i3 machines)
 *
 *       1k ohm pullup tables - This is atypical, and requires changing out the 4.7k pullup for 1k.
 *                              (but gives greater accuracy and more stable PID)
 *    51 : 100k thermistor - EPCOS (1k pullup)
 *    52 : 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
 *    55 : 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (1k pullup)
 *
 *  1047 : Pt1000 with 4k7 pullup (E3D)
 *  1010 : Pt1000 with 1k pullup (non standard)
 *   147 : Pt100 with 4k7 pullup
 *   110 : Pt100 with 1k pullup (non standard)
 *
 *  1000 : Benutzerdefiniert - Geben Sie Parameter in der Configuration_adv.h Zeile 54 an 
 *
 *         Verwenden Sie die folgenden Dummys für Test- oder Entwicklungszwecke. NIEMALS für Produktionsmaschinen.
 *   998 : Dummy Table that ALWAYS reads 25°C or the temperature defined below.
 *   999 : Dummy Table that ALWAYS reads 100°C or the temperature defined below.
 */
#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0
#define TEMP_SENSOR_5 0
#define TEMP_SENSOR_6 0
#define TEMP_SENSOR_7 0
#define TEMP_SENSOR_BED 1
#define TEMP_SENSOR_PROBE 0
#define TEMP_SENSOR_CHAMBER 0

// Dummy thermistor constant temperature readings, for use with 998 and 999
#define DUMMY_THERMISTOR_998_VALUE 25
#define DUMMY_THERMISTOR_999_VALUE 100

// Widerstandswerte bei Verwendung eines MAX31865 (Sensor -5)
// Sensorwert ist typischerweise 100 (PT100) oder 1000 (PT1000)
// Kalibrierwert ist typischerweise 430 Ohm für AdaFruit PT100-Module und 4300 Ohm für AdaFruit PT1000-Module.
//#define MAX31865_SENSOR_OHMS      100
//#define MAX31865_CALIBRATION_OHMS 430

// Verwenden Sie Temperatursensor 1 als redundanten Sensor mit Sensor 0. Wenn die Messwerte
// von den beiden Sensoren zu sehr voneinander abweichen, wird der Druck abgebrochen.
//#define TEMP_SENSOR_1_AS_REDUNDANT
#define MAX_REDUNDANT_TEMP_SENSOR_DIFF 10

#define TEMP_RESIDENCY_TIME     10  // (sekunden) Wartezeit bis sich das Hotend im M109 "eingependelt" hat
#define TEMP_WINDOW              1  // (°C) Temperaturfenster für den Timer "Temperatur erreicht"
#define TEMP_HYSTERESIS          3  // (°C) Temperaturfenster, die als "nah genug" zum Ziel gilt

#define TEMP_BED_RESIDENCY_TIME 10  // (sekunden) Wartezeit bis sich das Heizbett im M19 "eingependelt" hat
#define TEMP_BED_WINDOW          1  // (°C) Temperaturfenster für den Timer "Temperatur erreicht"
#define TEMP_BED_HYSTERESIS      3  // (°C) Temperaturfenster, die als "nah genug" zum Ziel gilt

// Unterhalb dieser Temperatur wird die Heizung ausgeschaltet
// weil es wahrscheinlich auf einen gebrochenen Thermistordraht hinweist.
#define HEATER_0_MINTEMP   5
#define HEATER_1_MINTEMP   5
#define HEATER_2_MINTEMP   5
#define HEATER_3_MINTEMP   5
#define HEATER_4_MINTEMP   5
#define HEATER_5_MINTEMP   5
#define HEATER_6_MINTEMP   5
#define HEATER_7_MINTEMP   5
#define BED_MINTEMP        5

// Oberhalb dieser Temperatur wird die Heizung abgeschaltet.
// Dies kann Komponenten vor Überhitzung schützen, aber NICHT vor Kurzschlüssen und Ausfällen.
// (Verwenden Sie MINTEMP für den Kurzschluss-/Ausfallschutz von Thermistoren.)
#define HEATER_0_MAXTEMP 275
#define HEATER_1_MAXTEMP 275
#define HEATER_2_MAXTEMP 275
#define HEATER_3_MAXTEMP 275
#define HEATER_4_MAXTEMP 275
#define HEATER_5_MAXTEMP 275
#define HEATER_6_MAXTEMP 275
#define HEATER_7_MAXTEMP 275
#define BED_MAXTEMP      150

//===============================================================================
//======= PID Einstellungen > Hotend Temperatur Kontrolle =======================
//===============================================================================

// PID (proportional-integral-derivativen Regelalgorithmus) Tuning Guide here: https://reprap.org/wiki/PID_Tuning

#define PIDTEMP          // Kommentieren Sie die Zeile aus, um PID zu deaktivieren und Bang-Bang zu aktivieren.
#define BANG_MAX 255     // Stromstärkenbegrenzer der Nozzle bei aktiviertem bang-bang Modus; 255=volle Leistung
#define PID_MAX BANG_MAX // Stromstärkenbegrenzer der Nozzle bei aktiviertem PID (see PID_FUNCTIONAL_RANGE below); 255=volle Leistung
#define PID_K1 0.95      // Glättungsfaktor innerhalb einer beliebigen PID-Schleife

#if ENABLED(PIDTEMP)
  //#define PID_EDIT_MENU         // Hinzufügen der PID-Bearbeitung zum Menü "Erweiterte Einstellungen". (~700 Bytes von PROGMEM)
  #define PID_AUTOTUNE_MENU       // Fügen Sie die PID-Autotuning-Funktion zum Menü "Erweiterte Einstellungen" hinzu. (~250 Bytes von PROGMEM)
  //#define PID_PARAMS_PER_HOTEND // Verwendet separate PID-Parameter für jeden Extruder (nützlich für nicht angepasste Extruder)
                                  // Setzen/Lesen mit gcode: M301 E[Extruder-Nummer, 0-2]

  #if ENABLED(PID_PARAMS_PER_HOTEND)
    // Geben Sie mindestens 1 HOTEND-Werten pro Array an.
    // Wenn weniger EXTRUDER-Werte angegeben werden, wird das letzte Element wiederholt.
    #define DEFAULT_Kp_LIST {  22.20,  22.20 }
    #define DEFAULT_Ki_LIST {   1.08,   1.08 }
    #define DEFAULT_Kd_LIST { 114.00, 114.00 }
  #else
    #define DEFAULT_Kp  28.41
    #define DEFAULT_Ki  3.05
    #define DEFAULT_Kd  66.22
  #endif
#endif // PIDTEMP

//===============================================================================================
//==================== PID Einstellungen > Heizbett Temperatur Kontrolle ========================
//===============================================================================================

/**
 * PID Bed Heating
 *
 * Wenn diese Option aktiviert ist, stellen Sie die folgenden PID-Konstanten ein.
 * Wenn diese Option deaktiviert ist, wird "Bang-Bang" verwendet und "BED_LIMIT_SWITCHING" aktiviert die Hysterese.
 *
 * Die PID-Frequenz wird die gleiche sein wie die Extruder-PWM.
 * Wenn PID_dT die Voreinstellung ist und für die Hardware/Konfiguration korrekt ist, bedeutet das 7,689 Hz,
 * Das ist gut, um eine Rechteckwelle in eine ohmsche Last zu treiben und hat keinen signifikanten
 * die FET-Erwärmung beeinflusst. Dies funktioniert auch gut mit einem Fotek SSR-10DA Solid State Relais in eine 250W
 * Heizung. Wenn sich Ihre Konfiguration deutlich von dieser unterscheidet und Sie die damit verbundenen Probleme nicht verstehen
 * verwenden Sie keine Bett-PID, bis jemand anderes überprüft hat, dass Ihre Hardware funktioniert.
 */
#define PIDTEMPBED

//#define BED_LIMIT_SWITCHING

/**
 * Maximale Bettleistung
 * Gilt für alle Formen der Bettenregelung (PID, Bang-Bang und Bang-Bang mit Hysterese).
 * Wenn dieser Parameter auf einen Wert unter 255 gesetzt wird, aktiviert er eine Form der PWM für das Bett, die wie ein Teiler wirkt.
 * Verwenden Sie diese Option also nur, wenn Sie mit PWM an Ihrem Bett einverstanden sind. (Siehe den Kommentar zur Aktivierung von PIDTEMPBED)
 */
#define MAX_BED_POWER 255 // begrenzt die Einschaltdauer auf Bett; 255=Vollstrom

#if ENABLED(PIDTEMPBED)
  //#define MIN_BED_POWER 0
  //#define PID_BED_DEBUG // Sendet Debug-Daten an die serielle Schnittstelle.

  // 120V 250W Silikonheizung in 4mm Borosilikat (MendelMax 1.5+)
  // aus FOPDT-Modell - kp=.39 Tp=405 Tdead=66, Tc auf 79,2 gesetzt, aggressiver Faktor von .15 (vs .1, 1, 10)

  #define DEFAULT_bedKp 10.00
  #define DEFAULT_bedKi .023
  #define DEFAULT_bedKd 305.4

  // Finden sie ihre eigenen Werte: "M303 E-1 C8 S90", um Autotune auf dem Bett bei 90 Grad Celsius für 8 Zyklen laufen zu lassen.
#endif // PIDTEMPBED

#if EITHER(PIDTEMP, PIDTEMPBED)
  #define PID_DEBUG                // Sendet Debug-Daten an die serielle Schnittstelle. Verwenden Sie 'M303 D', um die Aktivierung umzuschalten.
  //#define PID_OPENLOOP           // Schaltet den PID in den offenen Regelkreis. M104/M140 stellt die Ausgangsleistung von 0 bis PID_MAX ein.
  //#define SLOW_PWM_HEATERS       // PWM mit sehr niedriger Frequenz (ca. 0,125Hz=8s) und minimaler Zustandszeit von ca. 1s nützlich für Heizungen, die von einem Relais gesteuert werden
  #define PID_FUNCTIONAL_RANGE -2  // Wenn die Temperaturdifferenz zwischen der Solltemperatur und der Isttemperatur
                                   // größer als PID_FUNCTIONAL_RANGE ist, wird PID abgeschaltet und die Heizung auf min/max gesetzt.
#endif


// #----------------------------------------------=====  @section extruder  =====------------------------------------------#

/**
 * Verhindern Sie die Extrusion, wenn die Temperatur unter EXTRUDE_MINTEMP liegt.
 * Fügen Sie M302 hinzu, um die minimale Extrusionstemperatur einzustellen und/oder die
 * Kalt-Extrusionsverhinderung ein- und auszuschalten.
 *
 * *** Es wird dringend empfohlen, diese beiden Einstellungen aktiviert zu lassen ***
 */
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170

/**
 * Verhindern Sie eine einzelne Extrusion, die länger als EXTRUDE_MAXLENGTH ist.
 * Hinweis: Bei Bowden-Extrudern machen Sie diesen Wert groß genug, um das Laden/Entladen zu ermöglichen.
 */
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 200

//===============================================================================================
//================================== Thermo Ausfallschutz =======================================
//===============================================================================================

/**
 * Der Thermoschutz bietet eine zusätzliche Sicherheit für Ihren Drucker. Er schützt vor Beschädigung
 * und Feuer Marlin enthält immer sichere Minimal- und Maximaltemperaturbereiche, die
 * gegen einen gebrochenen oder nicht angeschlossenen Thermistordraht schützen.
 *
 * Das Problem: Wenn ein Thermistor ausfällt, meldet er die viel niedrigere Temperatur der Luft im Raum
 * und die Firmware lässt die die Heizung an.
 * 
 * Wenn Sie "Thermal Runaway" oder "Heating failed" Fehler erhalten, können die Details 
 * in der Configuration_adv.h eingestellt werden: Thermal Runaway Zeile 188, Heating failed Zeile 205
 */

#define THERMAL_PROTECTION_HOTENDS // Enable thermal protection for all extruders
#define THERMAL_PROTECTION_BED     // Enable thermal protection for the heated bed
//#define THERMAL_PROTECTION_CHAMBER // Enable thermal protection for the heated chamber

// #----------------------------------------------=====  @section machine  =====-------------------------------------------#

//===============================================================================================
//================================== Mechanische Einstellungen ==================================
//===============================================================================================

// Aktivieren Sie eine der folgenden Optionen für CoreXY-, CoreXZ- oder CoreYZ-Kinematiken,
// entweder in der üblichen Reihenfolge oder in umgekehrter Reihenfolge
//#define COREXY
//#define COREXZ
//#define COREYZ
//#define COREYX
//#define COREZX
//#define COREZY
//#define MARKFORGED_XY  // MarkForged. See https://reprap.org/forum/read.php?152,504042

//===============================================================================
//================================== Endanschlag Einstellungen ==================
//===============================================================================

// #----------------------------------------------=====  @section homing

// Specify here all the endstop connectors that are connected to any endstop or probe.
// Almost all printers will be using one per axis. Probes will use one or more of the
// extra connectors. Leave undefined any used for non-endstop and non-probe purposes.
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG

// Enable pullup for all endstops to prevent a floating state
#define ENDSTOPPULLUPS
#if DISABLED(ENDSTOPPULLUPS)
  // Disable ENDSTOPPULLUPS to set pullups individually
  //#define ENDSTOPPULLUP_XMAX
  //#define ENDSTOPPULLUP_YMAX
  //#define ENDSTOPPULLUP_ZMAX
  //#define ENDSTOPPULLUP_XMIN
  //#define ENDSTOPPULLUP_YMIN
  //#define ENDSTOPPULLUP_ZMIN
  //#define ENDSTOPPULLUP_ZMIN_PROBE
#endif

// Enable pulldown for all endstops to prevent a floating state
//#define ENDSTOPPULLDOWNS
#if DISABLED(ENDSTOPPULLDOWNS)
  // Disable ENDSTOPPULLDOWNS to set pulldowns individually
  //#define ENDSTOPPULLDOWN_XMAX
  //#define ENDSTOPPULLDOWN_YMAX
  //#define ENDSTOPPULLDOWN_ZMAX
  //#define ENDSTOPPULLDOWN_XMIN
  //#define ENDSTOPPULLDOWN_YMIN
  //#define ENDSTOPPULLDOWN_ZMIN
  //#define ENDSTOPPULLDOWN_ZMIN_PROBE
#endif

// Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
#define X_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Y_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Z_MIN_PROBE_ENDSTOP_INVERTING false // Set to true to invert the logic of the probe.


//===============================================================================
//================================== Steppertreiber ============================
//===============================================================================

/**
 * Stepper Drivers
 *
 * Mit diesen Einstellungen ist es ihnen möglich, das Timing von Steppertreibern abzustimmen und erweiterte Optionen für die
 * Steppertreiber zu aktivieren, unterstützung der Steppertreiber vorausgesetzt. 
 * Sie können so auch Timing-Optionen in Configuration_adv.h außer Kraft setzen.
 *
 * A4988 Standard für nicht spezifizierte Treiber.
 *
 * Options: A4988, A5984, DRV8825, LV8729, L6470, L6474, POWERSTEP01,
 *          TB6560, TB6600, TMC2100,
 *          TMC2130, TMC2130_STANDALONE, TMC2160, TMC2160_STANDALONE,
 *          TMC2208, TMC2208_STANDALONE, TMC2209, TMC2209_STANDALONE,
 *          TMC26X,  TMC26X_STANDALONE,  TMC2660, TMC2660_STANDALONE,
 *          TMC5130, TMC5130_STANDALONE, TMC5160, TMC5160_STANDALONE
 * :['A4988', 'A5984', 'DRV8825', 'LV8729', 'L6470', 'L6474', 'POWERSTEP01', 'TB6560', 'TB6600', 'TMC2100', 'TMC2130', 'TMC2130_STANDALONE', 'TMC2160', 'TMC2160_STANDALONE', 'TMC2208', 'TMC2208_STANDALONE', 'TMC2209', 'TMC2209_STANDALONE', 'TMC26X', 'TMC26X_STANDALONE', 'TMC2660', 'TMC2660_STANDALONE', 'TMC5130', 'TMC5130_STANDALONE', 'TMC5160', 'TMC5160_STANDALONE']
 */
#define X_DRIVER_TYPE  TMC2209
#define Y_DRIVER_TYPE  TMC2209
#define Z_DRIVER_TYPE  TMC2209
//#define X2_DRIVER_TYPE A4988
//#define Y2_DRIVER_TYPE A4988
#define Z2_DRIVER_TYPE TMC2209
//#define Z3_DRIVER_TYPE A4988
//#define Z4_DRIVER_TYPE A4988
#define E0_DRIVER_TYPE TMC2209
//#define E1_DRIVER_TYPE A4988
//#define E2_DRIVER_TYPE A4988
//#define E3_DRIVER_TYPE A4988
//#define E4_DRIVER_TYPE A4988
//#define E5_DRIVER_TYPE A4988
//#define E6_DRIVER_TYPE A4988
//#define E7_DRIVER_TYPE A4988

// Aktivieren Sie diese Funktion, wenn alle aktivierten Endstopp-Pins Interrupt-fähig sind.
// Dadurch entfällt die Notwendigkeit, die Interrupt-Pins abzufragen, was viele CPU-Zyklen spart.
//#define ENDSTOP_INTERRUPTS_FEATURE

/**
 * Rauschschwelle von Endanschlägen
 *
 * Aktivieren, wenn Ihre Sonde oder Endstopps aufgrund von Rauschen fälschlicherweise auslösen.
 *
 * - Höhere Werte können die Wiederholbarkeit oder Genauigkeit einiger Bettsonden beeinträchtigen.
 * - Um Rauschen zu beheben, installieren Sie einen 100nF Keramikkondensator parallel zum Schalter.
 * - Diese Funktion ist für übliche Mikroschalter, die auf Platinen montiert sind, nicht erforderlich.
 * - Basierend auf dem Makerbot-Design, das den 100nF-Kondensator bereits enthält.
 *
 * :[2,3,4,5,6,7]
 */
//#define ENDSTOP_NOISE_THRESHOLD 2

// Prüfen Sie, ob die Endanschläge während der Referenzfahrt festsitzen oder nicht angeschlossen sind.
//#define DETECT_BROKEN_ENDSTOP

//=============================================================================
//============================== Motor Schritteinstellungen ===================
//=============================================================================

/**
 * Standard Einstellungen
 *
 * Diese Einstellungen können mit dem Befehl M502 zurückgesetzt werden.
 * 
 * Beachten Sie, wenn das EEPROM aktiviert ist, gespeicherte Werte diese überschreiben.
 */

/**
 * Wenn DISTINCT_E_FACTORS aktiviert ist, verwendet Marlin die Faktoren E0, E1, E2 usw. für E0, E1, E2 usw. Extruder.
 * Wenn die Anzahl der Faktoren nicht gleich der Anzahl der Extruder ist, wird der letzte Faktor 
 * für die verbleibenden Extruder verwendet. Wenn DISTINCT_E_FACTORS nicht aktiviert ist,
 * dann verwendet Marlin den E0-Faktor für alle Extruder, unabhängig von der Anzahl der aufgelisteten Faktoren.
 */
//#define DISTINCT_E_FACTORS

/**
 * Standardmässigen-Achsschritte pro Einheit (steps/mm)
 * Übertrage mit M92
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 */
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 320, 320, 1600, 95 }

/**
 * Standardmässige Maximale Vorschubgeschwindigkeit (mm/s)
 * Übertrage mit M203
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 */
#define DEFAULT_MAX_FEEDRATE          { 2500, 2500, 100, 25 }

//#define LIMITED_MAX_FR_EDITING        // Übertrage mit M203 oder über Bildschirmeingabe: DEFAULT_MAX_FEEDRATE * 2
#if ENABLED(LIMITED_MAX_FR_EDITING)
  #define MAX_FEEDRATE_EDIT_VALUES    { 600, 600, 10, 50 } // ...oder, setzen sie ihre eigenen Limits
#endif

/**
 * Die Standardmässige maximale Beschleunigung (Änderung/s) Änderung = mm/s
 * (Maximale Startgeschwindigkeit für beschleunigte Bewegungen)
 * Übertrage mit M201
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 */
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 }

//#define LIMITED_MAX_ACCEL_EDITING     // Übertrage mit M201 oder über Bildschirmeingabe: DEFAULT_MAX_ACCELERATION * 2
#if ENABLED(LIMITED_MAX_ACCEL_EDITING)
  #define MAX_ACCEL_EDIT_VALUES       { 6000, 6000, 200, 20000 } // ...or, set your own edit limits
#endif

/**
 * Standardmässige-Beschleunigung (Eintrag/s) Eintrag = mm/s
 * Übertrage M204
 *
 *   M204 P    Beschleunigung
 *   M204 R    Rückzugbeschleunigung
 *   M204 T    Wegbeschleunigung
 */
#define DEFAULT_ACCELERATION           575    // X, Y, Z und E Druckerbeschleunigung Allgemein
#define DEFAULT_RETRACT_ACCELERATION  1000    // E Extruder Rückzugbeschleunigung
#define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z Wegbeschleunigung (nicht beim Druck)

/**
 * (Jerk) Standard-Reissgrenzen -Ruckgrenzen (mm/s)
 * Übertrage mit M205 X Y Z E
 *
 * "Jerk" (reissen oder rucken) gibt die minimale Geschwindigkeitsänderung an, die eine Beschleunigung erfordert.
 * Bei einem Geschwindigkeits- und Richtungswechsel kann es zu Aussetzern kommen. Ist die Differenz zu dem 
 * hier eingestellten Wert zu klein, kann es zu einem Jerk kommen.
 */
#define CLASSIC_JERK
#if ENABLED(CLASSIC_JERK)
  #define DEFAULT_XJERK  5.0
  #define DEFAULT_YJERK  5.0
  #define DEFAULT_ZJERK  0.4

  //#define TRAVEL_EXTRA_XYJERK 0.0     // Zusätzlicher Pauschalwert für alle Fahrbewegungen

  //#define LIMITED_JERK_EDITING        // Übertrage mit M205 oder über Bildschirmeingabe: DEFAULT_aJERK * 2 begrenzen
  #if ENABLED(LIMITED_JERK_EDITING)
    #define MAX_JERK_EDIT_VALUES { 20, 20, 0.6, 10 } // ...or, set your own edit limits
  #endif
#endif

#define DEFAULT_EJERK    5.0  // Kann von Linear Advance, Configuration_adv.h ab Zeile 1639, verwendet werden

/**
 * Abweichungsfaktor
 *
 * See:
 *   https://reprap.org/forum/read.php?1,739819
 *   https://blog.kyneticcnc.com/2018/10/computing-junction-deviation-for-marlin.html
 */
#if DISABLED(CLASSIC_JERK)
  #define JUNCTION_DEVIATION_MM 0.013 // (mm) Abstand von der realen Anschlusskante
  #define JD_HANDLE_SMALL_SEGMENTS    // Verwenden Sie die Krümmungsabschätzung anstelle nur des Verbindungswinkels
                                      // für kleine Segmente (< 1mm) mit großen Verbindungswinkeln (> 135°).
#endif

/**
 * S-Kurven Beschleunigung
 *
 * Diese Option eliminiert Vibrationen während des Drucks durch Anpassen einer Bézier-Kurve
 * die an die Bewegungsbeschleunigung angepasst wird, was zu wesentlich sanfteren Richtungsänderungen führt.
 *
 * See https://github.com/synthetos/TinyG/wiki/Jerk-Controlled-Motion-Explained
 */
//#define S_CURVE_ACCELERATION

//===========================================================================
//============================= Z Messtaster Optionen =======================
//===========================================================================

//
// See https://marlinfw.org/docs/configuration/probes.html
//

/**
 * Aktivieren Sie diese Option für einen Messtaster, der an den Z-MIN-Pin angeschlossen ist.
 * Der Messtaster ersetzt den Z-MIN-Endanschlag und wird für die Z-Referenzierung verwendet.
 * (aktiviert automatisch USE_PROBE_FOR_Z_HOMING.)
 */
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

// Erzwingen Sie die Verwendung des Messtasters für die Referenzfahrt der Z-Achse
//#define USE_PROBE_FOR_Z_HOMING

/**
 * Z_MIN_PROBE_PIN
 *
 * Definieren Sie diesen Pin, wenn der Tastkopf nicht an Z_MIN_PIN angeschlossen ist.
 * Wenn nicht definiert, wird der Standard-Pin für das ausgewählte MOTHERBOARD
 * verwendet. In den meisten Fällen ist die Vorgabe das, was Sie wollen.
 *
 * - Die einfachste Option ist die Verwendung eines freien Endstopp-Anschlusses.
 * - Verwenden Sie 5V für gespeiste (meist induktive) Messtaster.
 *
 *  - RAMPS 1.3/1.4 boards may use the 5V, GND, and Aux4->D32 pin:
 *    - For simple switches connect...
 *      - normally-closed switches to GND and D32.
 *      - normally-open switches to 5V and D32.
 */
//#define Z_MIN_PROBE_PIN 32 // Pin 32 ist RAMPS Standard

/**
 * Messtaster Type
 *
 * Inbus-Taster, Servo-Taster, Z-Schlitten-Taster, FIX_MOUNTED_PROBE, etc.
 * Aktivieren Sie einen dieser Typen, um die automatische Bettnivellierung unten zu verwenden.
 */

/**
 * Der "Manuelle Messtaster" bietet eine Möglichkeit, die "Auto"-Bettnivellierung ohne Taster durchzuführen.
 * Verwenden Sie G29 wiederholt und stellen Sie die Z-Höhe an jedem Punkt mit Fahrbefehlen ein
 * oder (mit LCD_BED_LEVELING) über das LCD-Display.
 */
//#define PROBE_MANUALLY
//#define MANUAL_PROBE_START_Z 0.2

/**
 * Eine fest montierter Messtaster wird entweder nicht ausgelöst oder muss manuell ausgelöst werden.
 * (z. B. eine induktiver Messtaster oder ein düsenbasierter Sondenschalter).
 */
//#define FIX_MOUNTED_PROBE

/**
 * Verwenden Sie die Düse als Taster, wie bei einem konduktiven
 * Düsensystem oder einem piezoelektrischen Smart-Effektor.
 */
//#define NOZZLE_AS_PROBE

/**
 * Z Servo Messtaster, wie z. B. ein Endlagenschalter an einem rotierenden Arm.
 */
//#define Z_PROBE_SERVO_NR 0       // Standardmäßig wird der Anschluss SERVO 0 verwendet.
//#define Z_SERVO_ANGLES { 70, 0 } // Z Servo Ausfahr- und Abstellwinkel

/**
 * Der BLTouch-Taster verwendet einen Hall-Effekt-Sensor und emuliert einen Servo.
 */
//#define BLTOUCH

/**
 * Drucksensor mit einer BLTouch-ähnlichen Schnittstelle
 */
//#define CREALITY_TOUCH

/**
 * Touch-MI Messtaster von hotends.fr
 *
 * Dieser Messtaster wird eingesetzt und aktiviert, indem die X-Achse zu einem Magneten am Rand des Bettes bewegt wird.
 * Standardmäßig wird angenommen, dass sich der Magnet auf der linken Seite befindet und durch eine Referenzfahrt aktiviert wird. Wenn sich der Magnet
 * auf der rechten Seite befindet, aktivieren und setzen Sie TOUCH_MI_DEPLOY_XPOS auf die Ausfahrposition.
 *
 * Benötigt auch: BABYSTEPPING, BABYSTEP_ZPROBE_OFFSET, Z_SAFE_HOMING,
 * und eine minimale Z_HOMING_HEIGHT von 10.
 */
//#define TOUCH_MI_PROBE
#if ENABLED(TOUCH_MI_PROBE)
  #define TOUCH_MI_RETRACT_Z 0.5                  // Höhe, bei der der Taster einfährt
  //#define TOUCH_MI_DEPLOY_XPOS (X_MAX_BED + 2)  // Für einen Magneten auf der rechten Seite des Bettes
  //#define TOUCH_MI_MANUAL_DEPLOY                // Für manuelles Ausfahren (LCD-Menü)
#endif

// Ein Messtaster, der mit einem Solenoid-Pin (SOL1_PIN) ausgefahren und eingerastet wird
//#define SOLENOID_PROBE

// Eine schlittenmontierter Messtaster, wie er von Charles Bell entworfen wurde.
//#define Z_PROBE_SLED
//#define SLED_DOCKING_OFFSET 5 // Der zusätzliche Weg, den die X-Achse zurücklegen muss, um den Schlitten abzuholen.
                                // 0 sollte in Ordnung sein, aber Sie können den Wert noch weiter erhöhen, wenn Sie möchten.

// Ein Messtaster, der durch Bewegen der X-Achse ausgelöst wird, wie z. B. der Zahnstangenmesstaster des Wilson II, der von Marty Rice entwickelt wurde.
//#define RACK_AND_PINION_PROBE
#if ENABLED(RACK_AND_PINION_PROBE)
  #define Z_PROBE_DEPLOY_X  X_MIN_POS
  #define Z_PROBE_RETRACT_X X_MAX_POS
#endif

// Duet Smart Effector (für Deltadrucker) - https://bit.ly/2ul5U7J
// Wenn der Pin definiert ist, können Sie M672 verwenden, um die Sondenempfindlichkeit zu setzen/zurückzusetzen.
//#define DUET_SMART_EFFECTOR
#if ENABLED(DUET_SMART_EFFECTOR)
  #define SMART_EFFECTOR_MOD_PIN  -1  // Verbinden Sie einen GPIO-Pin mit dem MOD-Pin des Smart-Effektors
#endif

/**
 * Verwenden Sie StallGuard2, um das Bett mit dem Messtaster anzutasten.
 * Erfordert stallGuard-fähige Trinamic-Schrittmachertreiber.
 * 
 * ACHTUNG: Dies kann Maschinen mit Z-Leitspindeln beschädigen.
 * Gehen Sie beim Einrichten dieser Funktion äußerst vorsichtig vor.
 */
//#define SENSORLESS_PROBING

//
// für Z_PROBE_ALLEN_KEY siehe die Delta-Beispielkonfigurationen.
//

/**
 * Nozzle-zu-Messtaster Versatz { X, Y, Z }
 *
 * - Messen Sie mit einem Messschieber oder einem Lineal den Abstand vom Mittelpunkt der Düse (Nozzlespitze), 
 *   zum Mittelpunkt des Messtasters in der X- und Y-Achse.
 * - Verwenden Sie für den Z-Offset Ihren besten gemessenen, oder gemittelten Wert und passen Sie ihn während der Laufzeit an.
 * - Tastkopf-Offsets können zur Laufzeit mit 'M851', LCD-Menüs, Babystepping, etc. eingestellt werden.
 *
 * Angenommen, der Arbeitsbereich ist typisch ausgerichtet:
 * - Messtaster rechts von der Düse hat einen positiven X-Versatz
 * - Messtaster links  von der Düse hat einen negativen X-Offset
 * - Messtaster hinter     der Düse hat einen positiven Y-Versatz
 * - Messtaster vorne   an der Düse hat einen negativen Y-Versatz
 *
 * Einige Beispiele:
 *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, -1 }   // Beispiel "1"
 *   #define NOZZLE_TO_PROBE_OFFSET {-10,  5, -1 }   // Beispiel "2"
 *   #define NOZZLE_TO_PROBE_OFFSET {  5, -5, -1 }   // Beispiel "3"
 *   #define NOZZLE_TO_PROBE_OFFSET {-15,-10, -1 }   // Beispiel "4"
 *
 *     +-- BACK ---+
 *     |    [+]    |
 *   L |        1  | R <-- Beispiel "1" (right+,  back+)
 *   E |  2        | I <-- Beispiel "2" ( left-,  back+)
 *   F |[-]  N  [+]| G <-- Nozzle
 *   T |       3   | H <-- Beispiel "3" (right+, front-)
 *     | 4         | T <-- Beispiel "4" ( left-, front-)
 *     |    [-]    |
 *     O-- FRONT --+
 */
#define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }

// Die meisten Messtaster sollten sich von den Kanten des Bettes fernhalten, aber
// mit NOZZLE_AS_PROBE kann dies für einen größeren Antastbereich aber negativ sein.
#define PROBING_MARGIN 10

// X und Y Achsen Verfahrgeschwindigkeit zwischen den Messungen (mm/min).
#define XY_PROBE_SPEED (133*60)

// Vorschubgeschwindigkeit (mm/min) für die erste Annäherung bei der Doppelmessung (MULTIPLE_PROBING == 2)
#define Z_PROBE_SPEED_FAST HOMING_FEEDRATE_Z

// Vorschubgeschwindigkeit (mm/min) für die "genaue" Messung jedes Punktes.
#define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 2)

/**
 * Mehrfaches Antasten
 *
 * Sie erhalten möglicherweise bessere Ergebnisse, wenn Sie die Messung 2 oder mehr Mal durchführen.
 * Mit EXTRA_PROBING werden die eher untypischen / fehlerhaften Messwerte nicht berücksichtigt.
 *
 * Eine Gesamtzahl von 2 ergibt schnelle/langsame Messungen mit einem gewichteten Durchschnitt.
 * Bei einer Gesamtzahl von 3 oder mehr werden mehr langsame Messungen hinzugefügt, wobei der Durchschnitt genommen wird.
 */
//#define MULTIPLE_PROBING 2
//#define EXTRA_PROBING    1

/**
 * Z-Messtaster benötigen Freiraum beim Einsetzen, Verstauen und Bewegen zwischen
 * Tastköpfe benötigen Freiraum, um nicht gegen das Bett oder andere Hardware zu stoßen.
 * Servomontierte Taster benötigen zusätzlichen Platz für die Drehung des Arms.
 * Induktive Tastköpfe benötigen Platz, um ein vorzeitiges Auslösen zu verhindern.
 *
 * Verwenden Sie diese Einstellungen, um den Abstand (mm) festzulegen, um den Messtaster anzuheben (oder
 * das Bett abzusenken). Die hier eingestellten Werte gelten zusätzlich zu einem eventuellen (negativen)
 * Taster-Z-Offset, der mit NOZZLE_TO_PROBE_OFFSET, M851 oder dem LCD eingestellt wurde.
 * Nur ganzzahlige Werte >= 1 sind hier gültig.
 *
 * Example: `M851 Z-5` with a CLEARANCE of 4  =>  9mm from bed to nozzle.
 *     But: `M851 Z+1` with a CLEARANCE of 2  =>  2mm from bed to nozzle.
 */
#define Z_CLEARANCE_DEPLOY_PROBE   10 // Z Clearance for Deploy/Stow
#define Z_CLEARANCE_BETWEEN_PROBES  5 // Z Clearance between probe points
#define Z_CLEARANCE_MULTI_PROBE     5 // Z Clearance between multiple probes
//#define Z_AFTER_PROBING           5 // Z position after probing is done

#define Z_PROBE_LOW_POINT          -2 // Farthest distance below the trigger-point to go before stopping

// For M851 give a range for adjusting the Z probe offset
#define Z_PROBE_OFFSET_RANGE_MIN -20
#define Z_PROBE_OFFSET_RANGE_MAX 20

// Enable the M48 repeatability test to test probe accuracy
//#define Z_MIN_PROBE_REPEATABILITY_TEST

// Before deploy/stow pause for user confirmation
//#define PAUSE_BEFORE_DEPLOY_STOW
#if ENABLED(PAUSE_BEFORE_DEPLOY_STOW)
  //#define PAUSE_PROBE_DEPLOY_WHEN_TRIGGERED // For Manual Deploy Allenkey Probe
#endif

/**
 * Enable one or more of the following if probing seems unreliable.
 * Heaters and/or fans can be disabled during probing to minimize electrical
 * noise. A delay can also be added to allow noise and vibration to settle.
 * These options are most useful for the BLTouch probe, but may also improve
 * readings with inductive probes and piezo sensors.
 */
//#define PROBING_HEATERS_OFF       // Turn heaters off when probing
#if ENABLED(PROBING_HEATERS_OFF)
  //#define WAIT_FOR_BED_HEATER     // Wait for bed to heat back up between probes (to improve accuracy)
#endif
//#define PROBING_FANS_OFF          // Turn fans off when probing
//#define PROBING_STEPPERS_OFF      // Turn steppers off (unless needed to hold position) when probing
//#define DELAY_BEFORE_PROBING 200  // (ms) To prevent vibrations from triggering piezo sensors

// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
// :{ 0:'Low', 1:'High' }
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 // For all extruders

// Disable axis steppers immediately when they're not being stepped.
// WARNING: When motors turn off there is a chance of losing position accuracy!
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false

// Turn off the display blinking that warns about possible accuracy reduction
//#define DISABLE_REDUCED_ACCURACY_WARNING

// #----------------------------------------------=====  @section extruder

#define DISABLE_E false             // Disable the extruder when not stepping
#define DISABLE_INACTIVE_EXTRUDER   // Keep only the active extruder enabled

// #----------------------------------------------=====  @section machine

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
#define INVERT_X_DIR true
#define INVERT_Y_DIR true
#define INVERT_Z_DIR false

// #----------------------------------------------=====  @section extruder

// For direct drive extruder v9 set to true, for geared extruder set to false.
#define INVERT_E0_DIR true
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define INVERT_E5_DIR false
#define INVERT_E6_DIR false
#define INVERT_E7_DIR false

// #----------------------------------------------=====  @section homing

//#define NO_MOTION_BEFORE_HOMING // Inhibit movement until all axes have been homed

//#define UNKNOWN_Z_NO_RAISE      // Don't raise Z (lower the bed) if Z is "unknown." For beds that fall when Z is powered off.

//#define Z_HOMING_HEIGHT  4      // (mm) Minimal Z height before homing (G28) for Z clearance above the bed, clamps, ...
                                  // Be sure to have this much clearance over your Z_MAX_POS to prevent grinding.

//#define Z_AFTER_HOMING  10      // (mm) Height to move to after homing Z

// Direction of endstops when homing; 1=MAX, -1=MIN
// :[-1,1]
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

// #----------------------------------------------=====  @section machine

// The size of the print bed
#define X_BED_SIZE 300
#define Y_BED_SIZE 300

// Travel limits (mm) after homing, corresponding to endstop positions.
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 400

/**
 * Software Endstops
 *
 * - Prevent moves outside the set machine bounds.
 * - Individual axes can be disabled, if desired.
 * - X and Y only apply to Cartesian robots.
 * - Use 'M211' to set software endstops on/off or report current state
 */

// Min software endstops constrain movement within minimum coordinate bounds
#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #define MIN_SOFTWARE_ENDSTOP_Z
#endif

// Max software endstops constrain movement within maximum coordinate bounds
#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#if EITHER(MIN_SOFTWARE_ENDSTOPS, MAX_SOFTWARE_ENDSTOPS)
  //#define SOFT_ENDSTOPS_MENU_ITEM  // Enable/Disable software endstops from the LCD
#endif

/**
 * Filament Runout Sensors
 * Mechanical or opto endstops are used to check for the presence of filament.
 *
 * RAMPS-based boards use SERVO3_PIN for the first runout sensor.
 * For other boards you may need to define FIL_RUNOUT_PIN, FIL_RUNOUT2_PIN, etc.
 */
//#define FILAMENT_RUNOUT_SENSOR
#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  #define FIL_RUNOUT_ENABLED_DEFAULT true // Enable the sensor on startup. Override with M412 followed by M500.
  #define NUM_RUNOUT_SENSORS   1          // Number of sensors, up to one per extruder. Define a FIL_RUNOUT#_PIN for each.
  #define FIL_RUNOUT_STATE     LOW        // Pin state indicating that filament is NOT present.
  #define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
  //#define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.

  // Set one or more commands to execute on filament runout.
  // (After 'M412 H' Marlin will ask the host to handle the process.)
  #define FILAMENT_RUNOUT_SCRIPT "M600"

  // After a runout is detected, continue printing this length of filament
  // before executing the runout script. Useful for a sensor at the end of
  // a feed tube. Requires 4 bytes SRAM per sensor, plus 4 bytes overhead.
  //#define FILAMENT_RUNOUT_DISTANCE_MM 25

  #ifdef FILAMENT_RUNOUT_DISTANCE_MM
    // Enable this option to use an encoder disc that toggles the runout pin
    // as the filament moves. (Be sure to set FILAMENT_RUNOUT_DISTANCE_MM
    // large enough to avoid false positives.)
    //#define FILAMENT_MOTION_SENSOR
  #endif
#endif

//===========================================================================
//=============================== Bed Leveling ==============================
//===========================================================================
// #----------------------------------------------=====  @section calibrate

/**
 * Choose one of the options below to enable G29 Bed Leveling. The parameters
 * and behavior of G29 will change depending on your selection.
 *
 *  If using a Probe for Z Homing, enable Z_SAFE_HOMING also!
 *
 * - AUTO_BED_LEVELING_3POINT
 *   Probe 3 arbitrary points on the bed (that aren't collinear)
 *   You specify the XY coordinates of all 3 points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_LINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_BILINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a mesh, best for large or uneven beds.
 *
 * - AUTO_BED_LEVELING_UBL (Unified Bed Leveling)
 *   A comprehensive bed leveling system combining the features and benefits
 *   of other systems. UBL also includes integrated Mesh Generation, Mesh
 *   Validation and Mesh Editing systems.
 *
 * - MESH_BED_LEVELING
 *   Probe a grid manually
 *   The result is a mesh, suitable for large or uneven beds. (See BILINEAR.)
 *   For machines without a probe, Mesh Bed Leveling provides a method to perform
 *   leveling in steps so you can manually adjust the Z height at each grid-point.
 *   With an LCD controller the process is guided step-by-step.
 */
//#define AUTO_BED_LEVELING_3POINT
//#define AUTO_BED_LEVELING_LINEAR
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_UBL
//#define MESH_BED_LEVELING

/**
 * Normally G28 leaves leveling disabled on completion. Enable
 * this option to have G28 restore the prior leveling state.
 */
//#define RESTORE_LEVELING_AFTER_G28

/**
 * Enable detailed logging of G28, G29, M48, etc.
 * Turn on with the command 'M111 S32'.
 * NOTE: Requires a lot of PROGMEM!
 */
//#define DEBUG_LEVELING_FEATURE

#if ANY(MESH_BED_LEVELING, AUTO_BED_LEVELING_BILINEAR, AUTO_BED_LEVELING_UBL)
  // Gradually reduce leveling correction until a set height is reached,
  // at which point movement will be level to the machine's XY plane.
  // The height can be set with M420 Z<height>
  #define ENABLE_LEVELING_FADE_HEIGHT

  // For Cartesian machines, instead of dividing moves on mesh boundaries,
  // split up moves into short segments like a Delta. This follows the
  // contours of the bed more closely than edge-to-edge straight moves.
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0 // (mm) Length of all segments (except the last one)

  /**
   * Enable the G26 Mesh Validation Pattern tool.
   */
  //#define G26_MESH_VALIDATION
  #if ENABLED(G26_MESH_VALIDATION)
    #define MESH_TEST_NOZZLE_SIZE    0.4  // (mm) Diameter of primary nozzle.
    #define MESH_TEST_LAYER_HEIGHT   0.2  // (mm) Default layer height for the G26 Mesh Validation Tool.
    #define MESH_TEST_HOTEND_TEMP  205    // (°C) Default nozzle temperature for the G26 Mesh Validation Tool.
    #define MESH_TEST_BED_TEMP      60    // (°C) Default bed temperature for the G26 Mesh Validation Tool.
    #define G26_XY_FEEDRATE         20    // (mm/s) Feedrate for XY Moves for the G26 Mesh Validation Tool.
    #define G26_RETRACT_MULTIPLIER   1.0  // G26 Q (retraction) used by default between mesh test elements.
  #endif

#endif

#if EITHER(AUTO_BED_LEVELING_LINEAR, AUTO_BED_LEVELING_BILINEAR)

  // Set the number of grid points per dimension.
  #define GRID_MAX_POINTS_X 3
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  // Probe along the Y axis, advancing X after each column
  //#define PROBE_Y_FIRST

  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)

    // Beyond the probed grid, continue the implied tilt?
    // Default is to maintain the height of the nearest edge.
    //#define EXTRAPOLATE_BEYOND_GRID

    //
    // Experimental Subdivision of the grid by Catmull-Rom method.
    // Synthesizes intermediate points to produce a more detailed mesh.
    //
    //#define ABL_BILINEAR_SUBDIVISION
    #if ENABLED(ABL_BILINEAR_SUBDIVISION)
      // Number of subdivisions between probe points
      #define BILINEAR_SUBDIVISIONS 3
    #endif

  #endif

#elif ENABLED(AUTO_BED_LEVELING_UBL)

  //===========================================================================
  //========================= Unified Bed Leveling ============================
  //===========================================================================

  //#define MESH_EDIT_GFX_OVERLAY   // Display a graphics overlay while editing the mesh

  #define MESH_INSET 1              // Set Mesh bounds as an inset region of the bed
  #define GRID_MAX_POINTS_X 10      // Don't use more than 15 points per axis, implementation limited.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  #define UBL_MESH_EDIT_MOVES_Z     // Sophisticated users prefer no movement of nozzle
  #define UBL_SAVE_ACTIVE_ON_M500   // Save the currently active mesh in the current slot on M500

  //#define UBL_Z_RAISE_WHEN_OFF_MESH 2.5 // When the nozzle is off the mesh, this value is used
                                          // as the Z-Height correction value.

#elif ENABLED(MESH_BED_LEVELING)

  //===========================================================================
  //=================================== Mesh ==================================
  //===========================================================================

  #define MESH_INSET 10          // Set Mesh bounds as an inset region of the bed
  #define GRID_MAX_POINTS_X 3    // Don't use more than 7 points per axis, implementation limited.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  //#define MESH_G28_REST_ORIGIN // After homing all axes ('G28' or 'G28 XYZ') rest Z at Z_MIN_POS

#endif // BED_LEVELING

/**
 * Add a bed leveling sub-menu for ABL or MBL.
 * Include a guided procedure if manual probing is enabled.
 */
//#define LCD_BED_LEVELING

#if ENABLED(LCD_BED_LEVELING)
  #define MESH_EDIT_Z_STEP  0.025 // (mm) Step size while manually probing Z axis.
  #define LCD_PROBE_Z_RANGE 4     // (mm) Z Range centered on Z_MIN_POS for LCD Z adjustment
  //#define MESH_EDIT_MENU        // Add a menu to edit mesh points
#endif

// Add a menu item to move between bed corners for manual bed adjustment
//#define LEVEL_BED_CORNERS

#if ENABLED(LEVEL_BED_CORNERS)
  #define LEVEL_CORNERS_INSET_LFRB { 30, 30, 30, 30 } // (mm) Left, Front, Right, Back insets
  #define LEVEL_CORNERS_HEIGHT      0.0   // (mm) Z height of nozzle at leveling points
  #define LEVEL_CORNERS_Z_HOP       4.0   // (mm) Z height of nozzle between leveling points
  //#define LEVEL_CENTER_TOO              // Move to the center after the last corner
#endif

/**
 * Commands to execute at the end of G29 probing.
 * Useful to retract or move the Z probe out of the way.
 */
//#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10"

// #----------------------------------------------=====  @section homing

// The center of the bed is at (X=0, Y=0)
//#define BED_CENTER_AT_0_0

// Manually set the home position. Leave these undefined for automatic settings.
// For DELTA this is the top-center of the Cartesian print volume.
//#define MANUAL_X_HOME_POS 0
//#define MANUAL_Y_HOME_POS 0
//#define MANUAL_Z_HOME_POS 0

// Use "Z Safe Homing" to avoid homing with a Z probe outside the bed area.
//
// With this feature enabled:
//
// - Allow Z homing only after X and Y homing AND stepper drivers still enabled.
// - If stepper drivers time out, it will need X and Y homing again before Z homing.
// - Move the Z probe (or nozzle) to a defined XY point before Z Homing.
// - Prevent Z homing when the Z probe is outside bed area.
//
//#define Z_SAFE_HOMING

#if ENABLED(Z_SAFE_HOMING)
  #define Z_SAFE_HOMING_X_POINT X_CENTER  // X point for Z homing
  #define Z_SAFE_HOMING_Y_POINT Y_CENTER  // Y point for Z homing
#endif

// Homing speeds (mm/min)
#define HOMING_FEEDRATE_XY (50*60)
#define HOMING_FEEDRATE_Z  (4*60)

// Validate that endstops are triggered on homing moves
#define VALIDATE_HOMING_ENDSTOPS

// #----------------------------------------------=====  @section calibrate

/**
 * Bed Skew Compensation
 *
 * This feature corrects for misalignment in the XYZ axes.
 *
 * Take the following steps to get the bed skew in the XY plane:
 *  1. Print a test square (e.g., https://www.thingiverse.com/thing:2563185)
 *  2. For XY_DIAG_AC measure the diagonal A to C
 *  3. For XY_DIAG_BD measure the diagonal B to D
 *  4. For XY_SIDE_AD measure the edge A to D
 *
 * Marlin automatically computes skew factors from these measurements.
 * Skew factors may also be computed and set manually:
 *
 *  - Compute AB     : SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2
 *  - XY_SKEW_FACTOR : TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD)))
 *
 * If desired, follow the same procedure for XZ and YZ.
 * Use these diagrams for reference:
 *
 *    Y                     Z                     Z
 *    ^     B-------C       ^     B-------C       ^     B-------C
 *    |    /       /        |    /       /        |    /       /
 *    |   /       /         |   /       /         |   /       /
 *    |  A-------D          |  A-------D          |  A-------D
 *    +-------------->X     +-------------->X     +-------------->Y
 *     XY_SKEW_FACTOR        XZ_SKEW_FACTOR        YZ_SKEW_FACTOR
 */
//#define SKEW_CORRECTION

#if ENABLED(SKEW_CORRECTION)
  // Input all length measurements here:
  #define XY_DIAG_AC 282.8427124746
  #define XY_DIAG_BD 282.8427124746
  #define XY_SIDE_AD 200

  // Or, set the default skew factors directly here
  // to override the above measurements:
  #define XY_SKEW_FACTOR 0.0

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200
    #define XZ_SKEW_FACTOR 0.0
    #define YZ_SKEW_FACTOR 0.0
  #endif

  // Enable this option for M852 to set skew at runtime
  //#define SKEW_CORRECTION_GCODE
#endif

//=============================================================================
//============================= Additional Features ===========================
//=============================================================================

// #----------------------------------------------=====  @section extras

/**
 * EEPROM
 *
 * Persistent storage to preserve configurable settings across reboots.
 *
 *   M500 - Store settings to EEPROM.
 *   M501 - Read settings from EEPROM. (i.e., Throw away unsaved changes)
 *   M502 - Revert settings to "factory" defaults. (Follow with M500 to init the EEPROM.)
 */
#define EEPROM_SETTINGS     // Persistent storage with M500 and M501
//#define DISABLE_M503        // Saves ~2700 bytes of PROGMEM. Disable for release!
#define EEPROM_CHITCHAT       // Give feedback on EEPROM commands. Disable to save PROGMEM.
#define EEPROM_BOOT_SILENT    // Keep M503 quiet and only give errors during first load
#if ENABLED(EEPROM_SETTINGS)
  //#define EEPROM_AUTO_INIT  // Init EEPROM automatically on any errors.
#endif

//
// Host Keepalive
//
// When enabled Marlin will send a busy status message to the host
// every couple of seconds when it can't accept commands.
//
#define HOST_KEEPALIVE_FEATURE        // Disable this if your host doesn't like keepalive messages
#define DEFAULT_KEEPALIVE_INTERVAL 2  // Number of seconds between "busy" messages. Set with M113.
#define BUSY_WHILE_HEATING            // Some hosts require "busy" messages even during heating

//
// G20/G21 Inch mode support
//
//#define INCH_MODE_SUPPORT

//
// M149 Set temperature units support
//
//#define TEMPERATURE_UNITS_SUPPORT

// #----------------------------------------------=====  @section temperature

// Preheat Constants
#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED     60
#define PREHEAT_1_FAN_SPEED     0 // Value from 0 to 255

#define PREHEAT_2_LABEL       "ASA"
#define PREHEAT_2_TEMP_HOTEND 245
#define PREHEAT_2_TEMP_BED     90
#define PREHEAT_2_FAN_SPEED     0 // Value from 0 to 255

/**
 * Nozzle Parken
 *
 * Parken der Düse an der angegebenen XYZ-Position bei Leerlauf oder G27.
 *
 * The "P" parameter controls the action applied to the Z axis:
 *
 *    P0  (Default) If Z is below park Z raise the nozzle.
 *    P1  Raise the nozzle always to Z-park height.
 *    P2  Raise the nozzle by Z-park amount, limited to Z_MAX_POS.
 */
//#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  // Specify a park position as { X, Y, Z_raise }
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
  //#define NOZZLE_PARK_X_ONLY          // X move only is required to park
  //#define NOZZLE_PARK_Y_ONLY          // Y move only is required to park
  #define NOZZLE_PARK_Z_RAISE_MIN   2   // (mm) Always raise Z by at least this distance
  #define NOZZLE_PARK_XY_FEEDRATE 100   // (mm/s) X and Y axes feedrate (also used for delta Z axis)
  #define NOZZLE_PARK_Z_FEEDRATE    5   // (mm/s) Z axis feedrate (not used for delta printers)
#endif

/**
 * Clean Nozzle Feature -- EXPERIMENTAL
 *
 * Adds the G12 command to perform a nozzle cleaning process.
 *
 * Parameters:
 *   P  Pattern
 *   S  Strokes / Repetitions
 *   T  Triangles (P1 only)
 *
 * Patterns:
 *   P0  Straight line (default). This process requires a sponge type material
 *       at a fixed bed location. "S" specifies strokes (i.e. back-forth motions)
 *       between the start / end points.
 *
 *   P1  Zig-zag pattern between (X0, Y0) and (X1, Y1), "T" specifies the
 *       number of zig-zag triangles to do. "S" defines the number of strokes.
 *       Zig-zags are done in whichever is the narrower dimension.
 *       For example, "G12 P1 S1 T3" will execute:
 *
 *          --
 *         |  (X0, Y1) |     /\        /\        /\     | (X1, Y1)
 *         |           |    /  \      /  \      /  \    |
 *       A |           |   /    \    /    \    /    \   |
 *         |           |  /      \  /      \  /      \  |
 *         |  (X0, Y0) | /        \/        \/        \ | (X1, Y0)
 *          --         +--------------------------------+
 *                       |________|_________|_________|
 *                           T1        T2        T3
 *
 *   P2  Circular pattern with middle at NOZZLE_CLEAN_CIRCLE_MIDDLE.
 *       "R" specifies the radius. "S" specifies the stroke count.
 *       Before starting, the nozzle moves to NOZZLE_CLEAN_START_POINT.
 *
 *   Caveats: The ending Z should be the same as starting Z.
 * Attention: EXPERIMENTAL. G-code arguments may change.
 */
//#define NOZZLE_CLEAN_FEATURE

#if ENABLED(NOZZLE_CLEAN_FEATURE)
  // Default number of pattern repetitions
  #define NOZZLE_CLEAN_STROKES  12

  // Default number of triangles
  #define NOZZLE_CLEAN_TRIANGLES  3

  // Specify positions for each tool as { { X, Y, Z }, { X, Y, Z } }
  // Dual hotend system may use { {  -20, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) },  {  420, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) }}
  #define NOZZLE_CLEAN_START_POINT { {  30, 30, (Z_MIN_POS + 1) } }
  #define NOZZLE_CLEAN_END_POINT   { { 100, 60, (Z_MIN_POS + 1) } }

  // Circular pattern radius
  #define NOZZLE_CLEAN_CIRCLE_RADIUS 6.5
  // Circular pattern circle fragments number
  #define NOZZLE_CLEAN_CIRCLE_FN 10
  // Middle point of circle
  #define NOZZLE_CLEAN_CIRCLE_MIDDLE NOZZLE_CLEAN_START_POINT

  // Move the nozzle to the initial position after cleaning
  #define NOZZLE_CLEAN_GOBACK

  // For a purge/clean station that's always at the gantry height (thus no Z move)
  //#define NOZZLE_CLEAN_NO_Z

  // For a purge/clean station mounted on the X axis
  //#define NOZZLE_CLEAN_NO_Y

  // Explicit wipe G-code script applies to a G12 with no arguments.
  //#define WIPE_SEQUENCE_COMMANDS "G1 X-17 Y25 Z10 F4000\nG1 Z1\nM114\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 Z15\nM400\nG0 X-10.0 Y-9.0"

#endif

/**
 * Print Job Timer
 *
 * Automatically start and stop the print job timer on M104/M109/M190.
 *
 *   M104 (hotend, no wait) - high temp = none,        low temp = stop timer
 *   M109 (hotend, wait)    - high temp = start timer, low temp = stop timer
 *   M190 (bed, wait)       - high temp = start timer, low temp = none
 *
 * The timer can also be controlled with the following commands:
 *
 *   M75 - Start the print job timer
 *   M76 - Pause the print job timer
 *   M77 - Stop the print job timer
 */
#define PRINTJOB_TIMER_AUTOSTART

/**
 * Print Counter
 *
 * Track statistical data such as:
 *
 *  - Total print jobs
 *  - Total successful print jobs
 *  - Total failed print jobs
 *  - Total time printing
 *
 * View the current statistics with M78.
 */
//#define PRINTCOUNTER

/**
 * Password
 *
 * Set a numerical password for the printer which can be requested:
 *
 *  - When the printer boots up
 *  - Upon opening the 'Print from Media' Menu
 *  - When SD printing is completed or aborted
 *
 * The following G-codes can be used:
 *
 *  M510 - Lock Printer. Blocks all commands except M511.
 *  M511 - Unlock Printer.
 *  M512 - Set, Change and Remove Password.
 *
 * If you forget the password and get locked out you'll need to re-flash
 * the firmware with the feature disabled, reset EEPROM, and (optionally)
 * re-flash the firmware again with this feature enabled.
 */
//#define PASSWORD_FEATURE
#if ENABLED(PASSWORD_FEATURE)
  #define PASSWORD_LENGTH 4                 // (#) Number of digits (1-9). 3 or 4 is recommended
  #define PASSWORD_ON_STARTUP
  #define PASSWORD_UNLOCK_GCODE             // Unlock with the M511 P<password> command. Disable to prevent brute-force attack.
  #define PASSWORD_CHANGE_GCODE             // Change the password with M512 P<old> S<new>.
  //#define PASSWORD_ON_SD_PRINT_MENU       // This does not prevent gcodes from running
  //#define PASSWORD_AFTER_SD_PRINT_END
  //#define PASSWORD_AFTER_SD_PRINT_ABORT
  //#include "Configuration_Secure.h"       // External file with PASSWORD_DEFAULT_VALUE
#endif

//=============================================================================
//============================= LCD and SD support ============================
//=============================================================================

// #----------------------------------------------=====  @section lcd

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *   en, an, bg, ca, cz, da, de, el, el_gr, es, eu, fi, fr, gl, hr, hu, it,
 *   jp_kana, ko_KR, nl, pl, pt, pt_br, ro, ru, sk, tr, uk, vi, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'de':'German', 'el':'Greek', 'el_gr':'Greek (Greece)', 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'gl':'Galician', 'hr':'Croatian', 'hu':'Hungarian', 'it':'Italian', 'jp_kana':'Japanese', 'ko_KR':'Korean (South Korea)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Traditional)', 'test':'TEST' }
 */
#define LCD_LANGUAGE de

/**
 * LCD Character Set
 *
 * Note: This option is NOT applicable to Graphical Displays.
 *
 * All character-based LCDs provide ASCII plus one of these
 * language extensions:
 *
 *  - JAPANESE ... the most common
 *  - WESTERN  ... with more accented characters
 *  - CYRILLIC ... for the Russian language
 *
 * To determine the language extension installed on your controller:
 *
 *  - Compile and upload with LCD_LANGUAGE set to 'test'
 *  - Click the controller to view the LCD menu
 *  - The LCD will display Japanese, Western, or Cyrillic text
 *
 * See https://marlinfw.org/docs/development/lcd_language.html
 *
 * :['JAPANESE', 'WESTERN', 'CYRILLIC']
 */
#define DISPLAY_CHARSET_HD44780 JAPANESE

/**
 * Info Screen Style (0:Classic, 1:Průša)
 *
 * :[0:'Classic', 1:'Průša']
 */
#define LCD_INFO_SCREEN_STYLE 0

/**
 * SD CARD
 *
 * SD Card support is disabled by default. If your controller has an SD slot,
 * you must uncomment the following option or it won't work.
 */
#define SDSUPPORT

/**
 * SD CARD: SPI SPEED
 *
 * Enable one of the following items for a slower SPI transfer speed.
 * This may be required to resolve "volume init" errors.
 */
//#define SPI_SPEED SPI_HALF_SPEED
//#define SPI_SPEED SPI_QUARTER_SPEED
//#define SPI_SPEED SPI_EIGHTH_SPEED

/**
 * SD CARD: ENABLE CRC
 *
 * Use CRC checks and retries on the SD communication.
 */
//#define SD_CHECK_AND_RETRY

/**
 * LCD Menu Items
 *
 * Disable all menus and only display the Status Screen, or
 * just remove some extraneous menu items to recover space.
 */
//#define NO_LCD_MENUS
//#define SLIM_LCD_MENUS

//
// ENCODER SETTINGS
//
// This option overrides the default number of encoder pulses needed to
// produce one step. Should be increased for high-resolution encoders.
//
//#define ENCODER_PULSES_PER_STEP 4

//
// Use this option to override the number of step signals required to
// move between next/prev menu items.
//
//#define ENCODER_STEPS_PER_MENU_ITEM 1

/**
 * Encoder Direction Options
 *
 * Test your encoder's behavior first with both options disabled.
 *
 *  Reversed Value Edit and Menu Nav? Enable REVERSE_ENCODER_DIRECTION.
 *  Reversed Menu Navigation only?    Enable REVERSE_MENU_DIRECTION.
 *  Reversed Value Editing only?      Enable BOTH options.
 */

//
// This option reverses the encoder direction everywhere.
//
//  Set this option if CLOCKWISE causes values to DECREASE
//
//#define REVERSE_ENCODER_DIRECTION

//
// This option reverses the encoder direction for navigating LCD menus.
//
//  If CLOCKWISE normally moves DOWN this makes it go UP.
//  If CLOCKWISE normally moves UP this makes it go DOWN.
//
//#define REVERSE_MENU_DIRECTION

//
// This option reverses the encoder direction for Select Screen.
//
//  If CLOCKWISE normally moves LEFT this makes it go RIGHT.
//  If CLOCKWISE normally moves RIGHT this makes it go LEFT.
//
//#define REVERSE_SELECT_DIRECTION

//
// Individual Axis Homing
//
// Add individual axis homing items (Home X, Home Y, and Home Z) to the LCD menu.
//
//#define INDIVIDUAL_AXIS_HOMING_MENU

//
// SPEAKER/BUZZER
//
// If you have a speaker that can produce tones, enable it here.
// By default Marlin assumes you have a buzzer with a fixed frequency.
//
//#define SPEAKER

//
// The duration and frequency for the UI feedback sound.
// Set these to 0 to disable audio feedback in the LCD menus.
//
// Note: Test audio output with the G-Code:
//  M300 S<frequency Hz> P<duration ms>
//
//#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 2
//#define LCD_FEEDBACK_FREQUENCY_HZ 5000

//=============================================================================
//======================== LCD / Controller Selection =========================
//========================   (Character-based LCDs)   =========================
//=============================================================================

//
// RepRapDiscount Smart Controller.
// https://reprap.org/wiki/RepRapDiscount_Smart_Controller
//
// Note: Usually sold with a white PCB.
//
//#define REPRAP_DISCOUNT_SMART_CONTROLLER

//
// Original RADDS LCD Display+Encoder+SDCardReader
// http://doku.radds.org/dokumentation/lcd-display/
//
//#define RADDS_DISPLAY

//
// ULTIMAKER Controller.
//
//#define ULTIMAKERCONTROLLER

//
// ULTIPANEL as seen on Thingiverse.
//
//#define ULTIPANEL

//
// PanelOne from T3P3 (via RAMPS 1.4 AUX2/AUX3)
// https://reprap.org/wiki/PanelOne
//
//#define PANEL_ONE

//
// GADGETS3D G3D LCD/SD Controller
// https://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
//
// Note: Usually sold with a blue PCB.
//
//#define G3D_PANEL

//
// RigidBot Panel V1.0
// http://www.inventapart.com/
//
//#define RIGIDBOT_PANEL

//
// Makeboard 3D Printer Parts 3D Printer Mini Display 1602 Mini Controller
// https://www.aliexpress.com/item/32765887917.html
//
//#define MAKEBOARD_MINI_2_LINE_DISPLAY_1602

//
// ANET and Tronxy 20x4 Controller
//
//#define ZONESTAR_LCD            // Requires ADC_KEYPAD_PIN to be assigned to an analog pin.
                                  // This LCD is known to be susceptible to electrical interference
                                  // which scrambles the display.  Pressing any button clears it up.
                                  // This is a LCD2004 display with 5 analog buttons.

//
// Generic 16x2, 16x4, 20x2, or 20x4 character-based LCD.
//
//#define ULTRA_LCD

//=============================================================================
//======================== LCD / Controller Selection =========================
//=====================   (I2C and Shift-Register LCDs)   =====================
//=============================================================================

//
// CONTROLLER TYPE: I2C
//
// Note: These controllers require the installation of Arduino's LiquidCrystal_I2C
// library. For more info: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//

//
// Elefu RA Board Control Panel
// http://www.elefu.com/index.php?route=product/product&product_id=53
//
//#define RA_CONTROL_PANEL

//
// Sainsmart (YwRobot) LCD Displays
//
// These require F.Malpartida's LiquidCrystal_I2C library
// https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home
//
//#define LCD_SAINSMART_I2C_1602
//#define LCD_SAINSMART_I2C_2004

//
// Generic LCM1602 LCD adapter
//
//#define LCM1602

//
// PANELOLU2 LCD with status LEDs,
// separate encoder and click inputs.
//
// Note: This controller requires Arduino's LiquidTWI2 library v1.2.3 or later.
// For more info: https://github.com/lincomatic/LiquidTWI2
//
// Note: The PANELOLU2 encoder click input can either be directly connected to
// a pin (if BTN_ENC defined to != -1) or read through I2C (when BTN_ENC == -1).
//
//#define LCD_I2C_PANELOLU2

//
// Panucatt VIKI LCD with status LEDs,
// integrated click & L/R/U/D buttons, separate encoder inputs.
//
//#define LCD_I2C_VIKI

//
// CONTROLLER TYPE: Shift register panels
//

//
// 2-wire Non-latching LCD SR from https://goo.gl/aJJ4sH
// LCD configuration: https://reprap.org/wiki/SAV_3D_LCD
//
//#define SAV_3DLCD

//
// 3-wire SR LCD with strobe using 74HC4094
// https://github.com/mikeshub/SailfishLCD
// Uses the code directly from Sailfish
//
//#define FF_INTERFACEBOARD

//
// TFT GLCD Panel with Marlin UI
// Panel connected to main board by SPI or I2C interface.
// See https://github.com/Serhiy-K/TFTGLCDAdapter
//
//#define TFTGLCD_PANEL_SPI
//#define TFTGLCD_PANEL_I2C

//=============================================================================
//=======================   LCD / Controller Selection  =======================
//=========================      (Graphical LCDs)      ========================
//=============================================================================

//
// CONTROLLER TYPE: Graphical 128x64 (DOGM)
//
// Wichtig: Die U8glib-Bibliothek wird für die grafische Darstellung benötigt!
//          https://github.com/olikraus/U8glib_Arduino
//
// Info: Wenn die LCD-Anzeige nicht reagiert, müssen Sie möglicherweise die Stecker umdrehen.

// RepRapDiscount Vollgrafik Smart Controller
// https://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

// ReprapWorld Graphical LCD
// https://reprapworld.com/?products_details&products_id/1218
//
//#define REPRAPWORLD_GRAPHICAL_LCD

// Aktivieren Sie eines dieser Geräte, wenn Sie ein Panucatt-Gerät besitzen
// Viki 2.0 oder mini Viki mit Grafik-LCD
// https://www.panucatt.com
//
//#define VIKI2
//#define miniVIKI

// MakerLab Mini Panel mit Grafiksteuerung und SD Unterstützung.
// https://reprap.org/wiki/Mini_panel
//
//#define MINIPANEL

// MaKr3d Makr-Panel mit Grafiksteuerung und SD Unterstützung.
// https://reprap.org/wiki/MaKr3d_MaKrPanel
//
//#define MAKRPANEL

// Adafruit ST7565 Voll Grafiksteuerung.
// https://github.com/eboston/Adafruit-ST7565-Full-Graphic-Controller/
//
//#define ELB_FULL_GRAPHIC_CONTROLLER

// BQ LCD Smart Controller standardmäßig mit dem BQ Hephestos 2 und der Witbox 2.
//
//#define BQ_LCD_SMART_CONTROLLER

// Cartesio UI grafisches Display
// http://mauk.cc/webshop/cartesio-shop/electronics/user-interface
//
//#define CARTESIO_UI

// LCD für das Melzi Board und grafischem LCD
//
//#define LCD_FOR_MELZI

// Original Ulticontroller vom Ultimaker 2 printer mit SSD1309 I2C Display und Encoder
// https://github.com/Ultimaker/Ultimaker2/tree/master/1249_Ulticontroller_Board_(x1)
//
//#define ULTI_CONTROLLER

// MKS MINI12864 mit Grafiksteuerung und SD Unterstützung.
// https://reprap.org/wiki/MKS_MINI_12864
//
//#define MKS_MINI_12864

// MKS LCD12864A/B mit Grafiksteuerung und SD support. 
// Gleiches Pinout wie das MKS_MINI_12864.
// https://www.aliexpress.com/item/33018110072.html
//
//#define MKS_LCD12864

// FYSETC Variante vom MINI12864 Grafiksteuerung mit SD Unterstützung
// https://wiki.fysetc.com/Mini12864_Panel/
//
//#define FYSETC_MINI_12864_X_X    // Type C/D/E/F. No tunable RGB Backlight by default
//#define FYSETC_MINI_12864_1_2    // Type C/D/E/F. Simple RGB Backlight (always on)
//#define FYSETC_MINI_12864_2_0    // Type A/B. Discreet RGB Backlight
//#define FYSETC_MINI_12864_2_1    // Type A/B. NeoPixel RGB Backlight
//#define FYSETC_GENERIC_12864_1_1 // Larger display with basic ON/OFF backlight.

// Werksdisplay für den Creality CR-10
// https://www.aliexpress.com/item/32833148327.html
//
// Dieses ist RAMPS-kompatibel und verwendet einen einzelnen 10-poligen Stecker.
// (Für CR-10-Besitzer, die die Melzi-Creality-Platine ersetzen möchten, aber das Display vewenden möchten)
//
//#define CR10_STOCKDISPLAY

// Ender-2 OEM-Display, eine Variante des MKS_MINI_12864
//
//#define ENDER2_STOCKDISPLAY

// ANET und Tronxy Grafiksteuerung
//
// Anet 128x64 Vollgrafik-LCD mit Drehgeber, wie beim Anet A6 verwendet
// Ein Klon des RepRapDiscount-Vollgrafikdisplays, aber mit
// anderen Pins/Verdrahtung (siehe pins_ANET_10.h).
//
//#define ANET_FULL_GRAPHICS_LCD

// AZSMZ 12864 LCD with SD
// https://www.aliexpress.com/item/32837222770.html
//
//#define AZSMZ_12864

// Silvergate GLCD controller
// https://github.com/android444/Silvergate
//
//#define SILVER_GATE_GLCD_CONTROLLER

//=============================================================================
//==============================  OLED Displays  ==============================
//=============================================================================

//
// SSD1306 OLED full graphics generic display
//
//#define U8GLIB_SSD1306

//
// SAV OLEd LCD module support using either SSD1306 or SH1106 based LCD modules
//
//#define SAV_3DGLCD
#if ENABLED(SAV_3DGLCD)
  #define U8GLIB_SSD1306
  //#define U8GLIB_SH1106
#endif

//
// TinyBoy2 128x64 OLED / Encoder Panel
//
//#define OLED_PANEL_TINYBOY2

//
// MKS OLED 1.3" 128×64 FULL GRAPHICS CONTROLLER
// https://reprap.org/wiki/MKS_12864OLED
//
// Tiny, but very sharp OLED display
//
//#define MKS_12864OLED          // Uses the SH1106 controller (default)
//#define MKS_12864OLED_SSD1306  // Uses the SSD1306 controller

//
// Zonestar OLED 128×64 FULL GRAPHICS CONTROLLER
//
//#define ZONESTAR_12864LCD           // Graphical (DOGM) with ST7920 controller
//#define ZONESTAR_12864OLED          // 1.3" OLED with SH1106 controller (default)
//#define ZONESTAR_12864OLED_SSD1306  // 0.96" OLED with SSD1306 controller

//
// Einstart S OLED SSD1306
//
//#define U8GLIB_SH1106_EINSTART

//
// Overlord OLED display/controller with i2c buzzer and LEDs
//
//#define OVERLORD_OLED

//
// FYSETC OLED 2.42" 128×64 FULL GRAPHICS CONTROLLER with WS2812 RGB
// Where to find : https://www.aliexpress.com/item/4000345255731.html
//#define FYSETC_242_OLED_12864   // Uses the SSD1309 controller

//=============================================================================
//========================== Extensible UI Displays ===========================
//=============================================================================

//
// DGUS Touch Display with DWIN OS. (Choose one.)
// ORIGIN : https://www.aliexpress.com/item/32993409517.html
// FYSETC : https://www.aliexpress.com/item/32961471929.html
//
//#define DGUS_LCD_UI_ORIGIN
//#define DGUS_LCD_UI_FYSETC
//#define DGUS_LCD_UI_HIPRECY

//
// Touch-screen LCD for Malyan M200/M300 printers
//
//#define MALYAN_LCD
#if ENABLED(MALYAN_LCD)
  #define LCD_SERIAL_PORT 1  // Default is 1 for Malyan M200
#endif

//
// Touch UI for FTDI EVE (FT800/FT810) displays
// See Configuration_adv.h for all configuration options.
//
//#define TOUCH_UI_FTDI_EVE

//
// Touch-screen LCD for Anycubic printers
//
//#define ANYCUBIC_LCD_I3MEGA
//#define ANYCUBIC_LCD_CHIRON
#if EITHER(ANYCUBIC_LCD_I3MEGA, ANYCUBIC_LCD_CHIRON)
  #define LCD_SERIAL_PORT 3  // Default is 3 for Anycubic
  //#define ANYCUBIC_LCD_DEBUG
#endif

//
// Third-party or vendor-customized controller interfaces.
// Sources should be installed in 'src/lcd/extensible_ui'.
//
//#define EXTENSIBLE_UI

#if ENABLED(EXTENSIBLE_UI)
  //#define EXTUI_LOCAL_BEEPER // Enables use of local Beeper pin with external display
#endif

//=============================================================================
//=============================== Graphical TFTs ==============================
//=============================================================================

/**
 * TFT Type - Select your Display type
 *
 * Available options are:
 *   MKS_TS35_V2_0,
 *   MKS_ROBIN_TFT24, MKS_ROBIN_TFT28, MKS_ROBIN_TFT32, MKS_ROBIN_TFT35,
 *   MKS_ROBIN_TFT43, MKS_ROBIN_TFT_V1_1R
 *   TFT_TRONXY_X5SA, ANYCUBIC_TFT35, LONGER_LK_TFT28
 *   TFT_GENERIC
 *
 * For TFT_GENERIC, you need to configure these 3 options:
 *   Driver:     TFT_DRIVER
 *               Current Drivers are: AUTO, ST7735, ST7789, ST7796, R61505, ILI9328, ILI9341, ILI9488
 *   Resolution: TFT_WIDTH and TFT_HEIGHT
 *   Interface:  TFT_INTERFACE_FSMC or TFT_INTERFACE_SPI
 */
//#define TFT_GENERIC

/**
 * TFT UI - User Interface Selection. Enable one of the following options:
 *
 *   TFT_CLASSIC_UI - Emulated DOGM - 128x64 Upscaled
 *   TFT_COLOR_UI   - Marlin Default Menus, Touch Friendly, using full TFT capabilities
 *   TFT_LVGL_UI    - A Modern UI using LVGL
 *
 *   For LVGL_UI also copy the 'assets' folder from the build directory to the
 *   root of your SD card, together with the compiled firmware.
 */
//#define TFT_CLASSIC_UI
//#define TFT_COLOR_UI
//#define TFT_LVGL_UI

/**
 * TFT Rotation. Set to one of the following values:
 *
 *   TFT_ROTATE_90,  TFT_ROTATE_90_MIRROR_X,  TFT_ROTATE_90_MIRROR_Y,
 *   TFT_ROTATE_180, TFT_ROTATE_180_MIRROR_X, TFT_ROTATE_180_MIRROR_Y,
 *   TFT_ROTATE_270, TFT_ROTATE_270_MIRROR_X, TFT_ROTATE_270_MIRROR_Y,
 *   TFT_MIRROR_X, TFT_MIRROR_Y, TFT_NO_ROTATION
 */
//#define TFT_ROTATION TFT_NO_ROTATION

//=============================================================================
//============================  Other Controllers  ============================
//=============================================================================

//
// Ender-3 v2 OEM display. A DWIN display with Rotary Encoder.
//
//#define DWIN_CREALITY_LCD

//
// ADS7843/XPT2046 ADC Touchscreen such as ILI9341 2.8
//
//#define TOUCH_SCREEN
#if ENABLED(TOUCH_SCREEN)
  #define BUTTON_DELAY_EDIT  50 // (ms) Button repeat delay for edit screens
  #define BUTTON_DELAY_MENU 250 // (ms) Button repeat delay for menus

  #define TOUCH_SCREEN_CALIBRATION

  //#define XPT2046_X_CALIBRATION 12316
  //#define XPT2046_Y_CALIBRATION -8981
  //#define XPT2046_X_OFFSET        -43
  //#define XPT2046_Y_OFFSET        257
#endif

//
// RepRapWorld REPRAPWORLD_KEYPAD v1.1
// https://reprapworld.com/products/electronics/ramps/keypad_v1_0_fully_assembled/
//
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0 // (mm) Distance to move per key-press

//=============================================================================
//=============================== Extra Features ==============================
//=============================================================================

// #----------------------------------------------=====  @section extras

// Set number of user-controlled fans. Disable to use all board-defined fans.
// :[1,2,3,4,5,6,7,8]
//#define NUM_M106_FANS 1

// Increase the FAN PWM frequency. Removes the PWM noise but increases heating in the FET/Arduino
//#define FAST_PWM_FAN

// Use software PWM to drive the fan, as for the heaters. This uses a very low frequency
// which is not as annoying as with the hardware PWM. On the other hand, if this frequency
// is too low, you should also increment SOFT_PWM_SCALE.
//#define FAN_SOFT_PWM

// Incrementing this by 1 will double the software PWM frequency,
// affecting heaters, and the fan if FAN_SOFT_PWM is enabled.
// However, control resolution will be halved for each increment;
// at zero value, there are 128 effective control positions.
// :[0,1,2,3,4,5,6,7]
#define SOFT_PWM_SCALE 0

// If SOFT_PWM_SCALE is set to a value higher than 0, dithering can
// be used to mitigate the associated resolution loss. If enabled,
// some of the PWM cycles are stretched so on average the desired
// duty cycle is attained.
//#define SOFT_PWM_DITHER

// Temperature status LEDs that display the hotend and bed temperature.
// If all hotends, bed temperature, and target temperature are under 54C
// then the BLUE led is on. Otherwise the RED led is on. (1C hysteresis)
//#define TEMP_STAT_LEDS

// Support for the BariCUDA Paste Extruder
//#define BARICUDA

// Support for BlinkM/CyzRgb
//#define BLINKM

// Support for PCA9632 PWM LED driver
//#define PCA9632

// Support for PCA9533 PWM LED driver
//#define PCA9533

/**
 * RGB LED / LED Strip Control
 *
 * Enable support for an RGB LED connected to 5V digital pins, or
 * an RGB Strip connected to MOSFETs controlled by digital pins.
 *
 * Adds the M150 command to set the LED (or LED strip) color.
 * If pins are PWM capable (e.g., 4, 5, 6, 11) then a range of
 * luminance values can be set from 0 to 255.
 * For NeoPixel LED an overall brightness parameter is also available.
 *
 * *** CAUTION ***
 *  LED Strips require a MOSFET Chip between PWM lines and LEDs,
 *  as the Arduino cannot handle the current the LEDs will require.
 *  Failure to follow this precaution can destroy your Arduino!
 *  NOTE: A separate 5V power supply is required! The NeoPixel LED needs
 *  more current than the Arduino 5V linear regulator can produce.
 * *** CAUTION ***
 *
 * LED Type. Enable only one of the following two options.
 */
//#define RGB_LED
//#define RGBW_LED

#if EITHER(RGB_LED, RGBW_LED)
  //#define RGB_LED_R_PIN 34
  //#define RGB_LED_G_PIN 43
  //#define RGB_LED_B_PIN 35
  //#define RGB_LED_W_PIN -1
#endif

// Support for Adafruit NeoPixel LED driver
//#define NEOPIXEL_LED
#if ENABLED(NEOPIXEL_LED)
  #define NEOPIXEL_TYPE   NEO_GRBW // NEO_GRBW / NEO_GRB - four/three channel driver type (defined in Adafruit_NeoPixel.h)
  #define NEOPIXEL_PIN     4       // LED driving pin
  //#define NEOPIXEL2_TYPE NEOPIXEL_TYPE
  //#define NEOPIXEL2_PIN    5
  #define NEOPIXEL_PIXELS 30       // Number of LEDs in the strip. (Longest strip when NEOPIXEL2_SEPARATE is disabled.)
  #define NEOPIXEL_IS_SEQUENTIAL   // Sequential display for temperature change - LED by LED. Disable to change all LEDs at once.
  #define NEOPIXEL_BRIGHTNESS 127  // Initial brightness (0-255)
  //#define NEOPIXEL_STARTUP_TEST  // Cycle through colors at startup

  // Support for second Adafruit NeoPixel LED driver controlled with M150 S1 ...
  //#define NEOPIXEL2_SEPARATE
  #if ENABLED(NEOPIXEL2_SEPARATE)
    #define NEOPIXEL2_PIXELS      15  // Number of LEDs in the second strip
    #define NEOPIXEL2_BRIGHTNESS 127  // Initial brightness (0-255)
    #define NEOPIXEL2_STARTUP_TEST    // Cycle through colors at startup
  #else
    //#define NEOPIXEL2_INSERIES      // Default behavior is NeoPixel 2 in parallel
  #endif

  // Use a single NeoPixel LED for static (background) lighting
  //#define NEOPIXEL_BKGD_LED_INDEX  0               // Index of the LED to use
  //#define NEOPIXEL_BKGD_COLOR { 255, 255, 255, 0 } // R, G, B, W
#endif

/**
 * Printer Event LEDs
 *
 * During printing, the LEDs will reflect the printer status:
 *
 *  - Gradually change from blue to violet as the heated bed gets to target temp
 *  - Gradually change from violet to red as the hotend gets to temperature
 *  - Change to white to illuminate work surface
 *  - Change to green once print has finished
 *  - Turn off after the print has finished and the user has pushed a button
 */
#if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
  #define PRINTER_EVENT_LEDS
#endif

/**
 * Number of servos
 *
 * For some servo-related options NUM_SERVOS will be set automatically.
 * Set this manually if there are extra servos needing manual control.
 * Set to 0 to turn off servo support.
 */
//#define NUM_SERVOS 3 // Servo index starts with 0 for M280 command

// (ms) Delay  before the next move will start, to give the servo time to reach its target angle.
// 300ms is a good value but you can try less delay.
// If the servo can't reach the requested position, increase it.
#define SERVO_DELAY { 300 }

// Only power servos during movement, otherwise leave off to prevent jitter
//#define DEACTIVATE_SERVOS_AFTER_MOVE

// Edit servo angles with M281 and save to EEPROM with M500
//#define EDITABLE_SERVO_ANGLES
