//    Copyright (c) 2021 udevs
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, version 3.
//
//    This program is distributed in the hope that it will be useful, but
//    WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
//    General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program. If not, see <http://www.gnu.org/licenses/>.

@interface CLSimulationManager : NSObject
-(void)clearSimulatedLocations;
-(void)startLocationSimulation;
-(void)stopLocationSimulation;
-(void)appendSimulatedLocation:(id)arg1 ;
-(void)flush;
-(void)loadScenarioFromURL:(id)arg1 ;
-(void)setSimulatedWifiPower:(BOOL)arg1 ;
-(void)startWifiSimulation;
-(void)stopWifiSimulation;
-(void)setSimulatedCell:(id)arg1 ;
-(void)startCellSimulation;
-(void)stopCellSimulation;
@end
