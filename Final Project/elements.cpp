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
			cout << "27	Cobalt	Co" << endl;
			break;
		case 28:
			cout << "28	Nickel	Ni" << endl;
			break;
		case 29:
			cout << "29	Copper	Cu" << endl;
			break;
		case 30:
			cout << "30	Zinc	Zn" << endl;
			break;
		case 31:
			cout << "31	Gallium	Ga" << endl;
			break;
		case 32:
			cout << "32	Germanium	Ge" << endl;
			break;
		case 33:
			cout << "33	Arsenic	As" << endl;
			break;
		case 34:
			cout << "34	Selenium	Se" << endl;
			break;
		case 35:
			cout << "35	Bromine	Br" << endl;
			break;
		case 36:
			cout << "36	Krypton	Kr" << endl;
			break;
		case 37:
			cout << "37	Rubidium	Rb" << endl;
			break;
		case 38:
			cout << "38	Strontium	Sr" << endl;
			break;
		case 39:
			cout << "39	Yttrium	Y" << endl;
			break;
		case 40:
			cout << "40	Zirconium	Zr" << endl;
			break;
		case 41:
			cout << "41	Niobium	Nb" << endl;
			break;
		case 42:
			cout << "42	Molybdenum	Mo" << endl;
			break;
		case 43:
			cout << "43	Technetium	Tc" << endl;
			break;
		case 44:
			cout << "44	Ruthenium	Ru" << endl;
			break;
		case 45:
			cout << "45	Rhodium	Rh" << endl;
			break;
		case 46:
			cout << "46	Palladium	Pd" << endl;
			break;
		case 47:
			cout << "47	Silver	Ag" << endl;
			break;
		case 48:
			cout << "48	Cadmium	Cd" << endl;
			break;
		case 49:
			cout << "49	Indium	In" << endl;
			break;
		case 50:
			cout << "50	Tin	Sn" << endl;
			break;
		case 51:
			cout << "51	Antimony	Sb" << endl;
			break;
		case 52:
			cout << "52	Tellurium	Te" << endl;
			break;
		case 53:
			cout << "53	Iodine	I" << endl;
			break;
		case 54:
			cout << "54	Xenon	Xe" << endl;
			break;
		case 55:
			cout << "55	Cesium	Cs" << endl;
			break;
		case 56:
			cout << "56	Barium	Ba" << endl;
			break;
		case 57:
			cout << "57	Lanthanum	La" << endl;
			break;
		case 58:
			cout << "58	Cerium	Ce" << endl;
			break;
		case 59:
			cout << "59	Praseodymium	Pr" << endl;
			break;
		case 60:
			cout << "60	Neodymium	Nd" << endl;
			break;
		case 61:
			cout << "61	Promethium	Pm" << endl;
			break;
		case 62:
			cout << "62	Samarium	Sm" << endl;
			break;
		case 63:
			cout << "63	Europium	Eu" << endl;
			break;
		case 64:
			cout << "64	Gadolinium	Gd" << endl;
			break;
		case 65:
			cout << "65	Terbium	Tb" << endl;
			break;
		case 66:
			cout << "66	Dysprosium	Dy" << endl;
			break;
		case 67:
			cout << "67	Holmium	Ho" << endl;
			break;
		case 68:
			cout << "68	Erbium	Er" << endl;
			break;
		case 69:
			cout << "69	Thulium	Tm" << endl;
			break;
		case 70:
			cout << "70	Ytterbium	Yb" << endl;
			break;
		case 71:
			cout << "71	Lutetium	Lu" << endl;
			break;
		case 72:
			cout << "72	Hafnium	Hf" << endl;
			break;
		case 73:
			cout << "73	Tantalum	Ta" << endl;
			break;
		case 74:
			cout << "74	Tungsten	W" << endl;
			break;
		case 75:
			cout << "75	Rhenium	Re" << endl;
			break;
		case 76:
			cout << "76	Osmium	Os" << endl;
			break;
		case 77:
			cout << "77	Iridium	Ir" << endl;
			break;
		case 78:
			cout << "78	Platinum	Pt" << endl;
			break;
		case 79:
			cout << "79	Gold	Au" << endl;
			break;
		case 80:
			cout << "80	Mercury	Hg" << endl;
			break;
		case 81:
			cout << "81	Thallium	Tl" << endl;
			break;
		case 82:
			cout << "82	Lead	Pb" << endl;
			break;
		case 83:
			cout << "83	Bismuth	Bi" << endl;
			break;
		case 84:
			cout << "84	Polonium	Po" << endl;
			break;
		case 85:
			cout << "85	Astatine	At" << endl;
			break;
		case 86:
			cout << "86	Radon	Rn" << endl;
			break;
		case 87:
			cout << "87	Francium	Fr" << endl;
			break;
		case 88:
			cout << "88	Radium	Ra" << endl;
			break;
		case 89:
			cout << "89	Actinium	Ac" << endl;
			break;
		case 90:
			cout << "90	Thorium	Th" << endl;
			break;
		case 91:
			cout << "91	Protactinium	Pa" << endl;
			break;
		case 92:
			cout << "92	Uranium	U" << endl;
			break;
		case 93:
			cout << "93	Neptunium	Np" << endl;
			break;
		case 94:
			cout << "94	Plutonium	Pu" << endl;
			break;
		case 95:
			cout << "95	Americium	Am" << endl;
			break;
		case 96:
			cout << "96	Curium	Cm" << endl;
			break;
		case 97:
			cout << "97	Berkelium	Bk" << endl;
			break;
		case 98:
			cout << "98	Californium	Cf" << endl;
			break;
		case 99:
			cout << "99	Einsteinium	Es" << endl;
			break;
		case 100:
			cout << "100	Fermium	Fm" << endl;
			break;
		case 101:
			cout << "101	Mendelevium	Md" << endl;
			break;
		case 102:
			cout << "102	Nobelium	No" << endl;
			break;
		case 103:
			cout << "103	Lawrencium	Lr" << endl;
			break;
		case 104:
			cout << "104	Rutherfordium	Rf" << endl;
			break;
		case 105:
			cout << "105	Dubnium	Db" << endl;
			break;
		case 106:
			cout << "106	Seaborgium	Sg" << endl;
			break;
		case 107:
			cout << "107	Bohrium	Bh" << endl;
			break;
		case 108:
			cout << "108	Hassium	Hs" << endl;
			break;
		case 109:
			cout << "109	Meitnerium	Mt" << endl;
			break;
		case 110:
			cout << "110	Darmstadtium	Ds" << endl;
			break;
		case 111:
			cout << "111	Roentgenium	Rg" << endl;
			break;
		case 112:
			cout << "112	Ununbium	Uub" << endl;
			break;
		case 113:
			cout << "113	Ununtrium	Uut" << endl;
			break;
		case 114:
			cout << "114	Ununquadium	Uuq" << endl;
			break;
		case 115:
			cout << "115	Ununpentium	Uup" << endl;
			break;
		case 116:
			cout << "116	Ununhexium	Uuh" << endl;
			break;
		case 117:
			cout << "117	Ununseptium	Uus" << endl;
			break;
		case 118:
			cout << "118	Ununoctium	Uuo" << endl;
			break;
		default:
			cout << "The selection does not exist" << endl;
			break;
		}

		system("pause");
		return 0;
	}