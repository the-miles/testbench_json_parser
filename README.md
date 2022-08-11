# testbench_json_parser
A specific parser for testbench json-data.


Jedes produzierte Device muss während oder nach Produktion geprüft und getestet werden. Tests die früher manuell gemacht wurden sind durch eigens entwickelte Teststände oder eigens hergestellte Testumgebungen automatisierbar geworden. Baugruppenübergreifend soll eine einzige Software verwendet werden um die Testabläufe für ein Device oder eine Gruppe von Devices gezielt zu starten.

Jeder Testablauf muss in einer definierten Form beschrieben werden um der Software alle Parameter übergeben zu können. Diese Form ist eine JSON-Datenstruktur die sowohl in Form eines Files, als auch in Form eines Strings, oder eines String-Streams (aus einer Datenbank) existieren kann.

Ein Testablauf beinhaltet meist gleiche oder ähnliche Elemente. In diesem Fall sind es sowohl physische Messungen die einige Parameter und Grenzwerte für das gemessene Ergebnis erfordern, als auch virtuelle Tests wie EEPROM- und Flash-Speicher beschreiben, lesen und vergleichen. Darüber hinaus müssen die einzelnen Geräte (Teststand, Netzteil, Messgeräte, o.ä.) vorab konfiguriert werden.

Jede sogenannte Testaction verfügt über die gleichen Eigenschaften. Diese wären u.a.:
- die Sequenznummer
- einen Kommentar
- die Tatsache ob der DUT vor der Action eingeschaltet werden muss
- das drucken/streamen der Informationen zur Testaction

Hierbei ist zu beachten, dass es aufgrund der Teststand-Implementierung zu mehrfach ein- und ausschaltvorgängen des DUT kommen kann.

# Klassenhierachie
Im Zuge der Generalisierung erbt jede Messung und jede Action von der Klasse Testaction. 

# Ablauf
Bedingung: Die im JSON-File festgelegte Reihenfolge der Testactions muss so eingehalten werden. Folgender Ablauf soll beim 

1. Einlesen der kompletten JSON-Datenstruktur
2. Parsen der einzelnen Testactions
3. Interpretieren der einzelnen Testactions
4. Speichern der Testactions in Objekten
5. Ausführen der Testactions gemäß der Reihenfolge in der JSON-Datenstruktur
