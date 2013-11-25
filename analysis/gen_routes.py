#!/usr/bin/env python
import csv
import pickle

airpdict = pickle.load(open( "airpdict.p", "rb" ) )

testf = open("C:\Workspace\Courses\AI\Project\Sept10-SimulatorFiles\Sept10-SimulatorFiles\TestFlights.csv", "rb")
reader = csv.reader(testf)

submitf = open("C:\Workspace\Courses\AI\Project\Sept10-SimulatorFiles\Sept10-SimulatorFiles\pysub.csv", "wb")
writer = csv.writer(submitf)

writer.writerow(["FlightId", "Ordinal", "Latitude", "Longitude", "Altitude", "AirSpeed"])

count = 0
airpList = []
for row in reader:
    #print row
    dest = row[2]
    if dest in airpdict.keys():
        #get cutoff data
        rowid = long(row[0])
        clat = float(row[4])
        clongi = float(row[5])
        calt = float(row[6])
        cspeed = float(row[7])
        #get destination airport coordinates
        dlat = airpdict[dest][0]
        dlongi = airpdict[dest][1]
        #print what we got so far
        print row[0], clat, clongi, dest, dlat, dlongi
        #create ordinal data
        ordcount = 1
        ordlat = (clat + dlat)/2.0
        ordlongi = (clongi + dlongi)/2.0
        ordalt = calt
        ordspeed = cspeed
        #write ordinal data to csv
        writer.writerow([rowid, ordcount, ordlat, ordlongi, ordalt, ordspeed])
    