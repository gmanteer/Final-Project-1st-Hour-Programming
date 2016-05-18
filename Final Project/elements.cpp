#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class ElementList{
public:
	string info;
	int element;
	int atomicNum;
};

int main(){
	cout << "Grant Polmanteer 1st Hour" << endl;

	int selection = 0;
	cout << "Enter an element's number to get info about that element: ";
	cin >> selection;

	for (int i = 0; i < 118; i++){
		if (selection >= 0 && selection <= 119){
			selection--;
			if (selection == 118){
				continue;
			}
			else{
				cout << "Invalid Selection" << endl;
			}
		}
	}

		switch (selection){
		case 0:
			cout << "" << endl;
			break;
		case 1:
			cout << "1	Hydrogen  H" << endl;
			break;
		case 2:
			cout << "2	Helium	He" << endl;
			break; 
		case 3:
			cout << "3  Lithium	Li" << endl;
			break;
		case 4:
			cout << "4	Beryllium	Be" << endl;
			break;
		case 5:
			cout << "5	Boron	B" << endl;
			break;
		case 6:
			cout << "6	Carbon	C" << endl;
			break;
		case 7:
			cout << "7	Nitrogen	N" << endl;
			break;
		case 8:
			cout << "8	Oxygen	O" << endl;
			break;
		case 9:
			cout << "9	Fluorine	F" << endl;
			break;
		case 10:
			cout << "10	Neon	Ne" << endl;
			break;
		case 11:
			cout << "11	Sodium	Na" << endl;
			break;
		case 12:
			cout << "12	Magnesium	Mg" << endl;
			break;
		case 13:
			cout << "13	Aluminum	Al" << endl;
			break;
		case 14:
			cout << "14	Silicon	Si" << endl;
			break;
		case 15:
			cout << "15	Phosphorus	P" << endl;
			break;
		case 16:
			cout << "16	Sulfur	S" << endl;
			break;
		case 17:
			cout << "17	Chlorine	Cl" << endl;
			break;
		case 18:
			cout << "18	Argon	Ar" << endl;
			break;
		case 19:
			cout << "19	Potassium	K" << endl;
			break;
		case 20:
			cout << "20	Calcium	Ca" << endl;
			break;
		case 21:
			cout << "21	Scandium	Sc" << endl;
			break;
		case 22:
			cout << "22	Titanium	Ti" << endl;
			break;
		case 23:
			cout << "23	Vanadium	V" << endl;
			break;
		case 24:
			cout << "24	Chromium	Cr" << endl;
			break;
		case 25:
			cout << "25	Manganese	Mn" << endl;
			break;
		case 26:
			cout << "26	Iron	Fe" << endl;
			break;
		case 27:
			cout << "19	Potassium	K" << endl;
			break;
		case 28:
			cout << "19	Potassium	K" << endl;
			break;
		case 29:
			cout << "19	Potassium	K" << endl;
		case 30:
			cout << "19	Potassium	K" << endl;
			break;
		case 31:
			cout << "19	Potassium	K" << endl;
			break;
		case 32:
			cout << "19	Potassium	K" << endl;
			break;
		case 33:
			cout << "19	Potassium	K" << endl;
			break;
		case 34:
			cout << "19	Potassium	K" << endl;
			break;
		case 35:
			cout << "19	Potassium	K" << endl;
			break;
		case 36:
			cout << "19	Potassium	K" << endl;
			break;
		case 37:
			cout << "19	Potassium	K" << endl;
			break;
		case 38:
			cout << "19	Potassium	K" << endl;
			break;
		case 38:
			cout << "19	Potassium	K" << endl;
			break;

				
				
				
				
				
				
				
				27	Cobalt	Co
				28	Nickel	Ni
				29	Copper	Cu
				30	Zinc	Zn
				31	Gallium	Ga
				32	Germanium	Ge
				33	Arsenic	As
				34	Selenium	Se
				35	Bromine	Br
				36	Krypton	Kr
				37	Rubidium	Rb
				38	Strontium	Sr
				39	Yttrium	Y
				40	Zirconium	Zr
				41	Niobium	Nb
				42	Molybdenum	Mo
				43	Technetium	Tc
				44	Ruthenium	Ru
				45	Rhodium	Rh
				46	Palladium	Pd
				47	Silver	Ag
				48	Cadmium	Cd
				49	Indium	In
				50	Tin	Sn
				51	Antimony	Sb
				52	Tellurium	Te
				53	Iodine	I
				54	Xenon	Xe
				55	Cesium	Cs
				56	Barium	Ba
				57	Lanthanum	La
				58	Cerium	Ce
				59	Praseodymium	Pr
				60	Neodymium	Nd
				61	Promethium	Pm
				62	Samarium	Sm
				63	Europium	Eu
				64	Gadolinium	Gd
				65	Terbium	Tb
				66	Dysprosium	Dy
				67	Holmium	Ho
				68	Erbium	Er
				69	Thulium	Tm
				70	Ytterbium	Yb
				71	Lutetium	Lu
				72	Hafnium	Hf
				73	Tantalum	Ta
				74	Tungsten	W
				75	Rhenium	Re
				76	Osmium	Os
				77	Iridium	Ir
				78	Platinum	Pt
				79	Gold	Au
				80	Mercury	Hg
				81	Thallium	Tl
				82	Lead	Pb
				83	Bismuth	Bi
				84	Polonium	Po
				85	Astatine	At
				86	Radon	Rn
				87	Francium	Fr
				88	Radium	Ra
				89	Actinium	Ac
				90	Thorium	Th
				91	Protactinium	Pa
				92	Uranium	U
				93	Neptunium	Np
				94	Plutonium	Pu
				95	Americium	Am
				96	Curium	Cm
				97	Berkelium	Bk
				98	Californium	Cf
				99	Einsteinium	Es
				100	Fermium	Fm
				101	Mendelevium	Md
				102	Nobelium	No
				103	Lawrencium	Lr
				104	Rutherfordium	Rf
				105	Dubnium	Db
				106	Seaborgium	Sg
				107	Bohrium	Bh
				108	Hassium	Hs
				109	Meitnerium	Mt
				110	Darmstadtium	Ds
				111	Roentgenium	Rg
				112	Ununbium	Uub
				113	Ununtrium	Uut
				114	Ununquadium	Uuq
				115	Ununpentium	Uup
				116	Ununhexium	Uuh
				117	Ununseptium	Uus
				118	Ununoctium	Uuo

				default:
					cout << "The selection does not exist" << endl;
					break;
		}

		system("pause");
		return 0;
	}