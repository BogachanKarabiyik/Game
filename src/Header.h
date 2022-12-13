#pragma once
//37

class dice {
private:
	
public:
	int d4() {
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(1, 4);
		return distribution(generator);
	}
	int d6() {
		return distribution(generator);
	}
	int d8() {
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(1, 8);
		return distribution(generator);

	}
	int d10() {
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(1, 10);
		return distribution(generator);
	}
	int d12() {
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(1, 12);
		return distribution(generator);
	}
	int d20() {
		std::default_random_engine generator(rd());
		std::uniform_int_distribution<int> distribution(1, 20);
		return distribution(generator);
	}
}dice;

class file {
private:
	std::fstream save_file;
public:
	std::string save_array[10000] = {};
	void save() {
		save_file.open("save.txt", std::ios::out);//write
		if (save_file.is_open()) {
			// save_file << "Hello\n";
			// save_file << "This is second line\n";
			for (int i = 0; i < 10000; i++) {
				save_file << save_array[i];
			}
			save_file.close();
		}
		//save_file.open("save.txt", std::ios::app);//append
		//if (save_file.is_open()) {
			// save_file << "Hello2\n";
			//save_file.close();
		//}
	}

	void load() {
		save_file.open("save.txt", std::ios::in);//read
		if (save_file.is_open()) {
			std::string line;
			int i = 0;
			while (getline(save_file, line)) {
				// std::cout << line << std::endl;
				save_array[i] = line;
				i++;
			}
			i = 0;
			save_file.close();
		}
	}
}file;

class display {
private:
	std::string input;
	int temp_hp, temp_const, temp_mana, temp_energy, temp_str, temp_vig, temp_agi, temp_dex, temp_stam, temp_int, temp_char, temp_pers;
	std::string error = "                              \033[44m TYPE 1 OR 2 \033[0m";
public:

	void new_game() {
		error = "                             \033[44m TYPE YOUR NAME \033[0m";
		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n   Name:";
			std::cout << "\n   Gender:";
			std::cout << "\n   Race:";
			std::cout << "\n   Class:";
			std::cout << "\n   Level:";
			std::cout << "\n   Health:";
			std::cout << "\n   Energy:";
			std::cout << "\n   Mana:";
			std::cout << "\n";
			std::cout << "\n   Strength:";
			std::cout << "\n   Vigor:";
			std::cout << "\n   Constitution:";
			std::cout << "\n   Agility:";
			std::cout << "\n   Dexterity:";
			std::cout << "\n   Stamina:";
			std::cout << "\n   Intelligence:";
			std::cout << "\n   Charisma:";
			std::cout << "\n   Perspicacity:";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input.length() > 20) {
				error = "                         \033[44m YOUR NAME IS TOO LONG \033[0m";
			}
			else if (input.length() < 2) {
				error = "                         \033[44m YOUR NAME IS TOO SHORT \033[0m";
			}
			else {
				file.save_array[0] = input;
				break;
			}
		}
		error = "                             \033[44m TYPE 1, 2 OR 3 \033[0m";
		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n   Name: " + file.save_array[0];
			std::cout << "\n   Gender: \033[44m 1. MAN \033[0m \033[44m 2. WOMAN \033[0m \033[44m 3. NON-BINARY \033[0m";
			std::cout << "\n   Race:";
			std::cout << "\n   Class:";
			std::cout << "\n   Level:";
			std::cout << "\n   Health:";
			std::cout << "\n   Energy:";
			std::cout << "\n   Mana:";
			std::cout << "\n";
			std::cout << "\n   Strength:";
			std::cout << "\n   Vigor:";
			std::cout << "\n   Constitution:";
			std::cout << "\n   Agility:";
			std::cout << "\n   Dexterity:";
			std::cout << "\n   Stamina:";
			std::cout << "\n   Intelligence:";
			std::cout << "\n   Charisma:";
			std::cout << "\n   Perspicacity:";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input == "1") {
				file.save_array[1] = "Man";
				break;
			}
			else if (input == "2") {
				file.save_array[1] = "Woman";
				break;
			}
			else if (input == "3") {
				file.save_array[1] = "Non-binary";
				break;
			}
		}
		error = "                          \033[44m TYPE 1, 2, 3, 4 OR 5 \033[0m";
		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n   Name: " + file.save_array[0];
			std::cout << "\n   Gender: " + file.save_array[1];
			std::cout << "\n   Race: \033[44m 1. HUMAN \033[0m \033[44m 2. ELF \033[0m \033[44m 3. DWARF \033[0m \033[44m 4. HALFLING \033[0m \033[44m 5. ORC \033[0m";
			std::cout << "\n   Class:";
			std::cout << "\n   Level:";
			std::cout << "\n   Health:";
			std::cout << "\n   Energy:";
			std::cout << "\n   Mana:";
			std::cout << "\n";
			std::cout << "\n   Strength:";
			std::cout << "\n   Vigor:";
			std::cout << "\n   Constitution:";
			std::cout << "\n   Agility:";
			std::cout << "\n   Dexterity:";
			std::cout << "\n   Stamina:";
			std::cout << "\n   Intelligence:";
			std::cout << "\n   Charisma:";
			std::cout << "\n   Perspicacity:";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input == "1") {
				file.save_array[2] = "Human";
				break;
			}
			else if (input == "2") {
				file.save_array[2] = "Elf";
				break;
			}
			else if (input == "3") {
				file.save_array[2] = "Dwarf";
				break;
			}
			else if (input == "4") {
				file.save_array[2] = "Halfling";
				break;
			}
			else if (input == "5") {
				file.save_array[2] = "Orc";
				break;
			}
		}
		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n   Name: " + file.save_array[0];
			std::cout << "\n   Gender: " + file.save_array[1];
			std::cout << "\n   Race: " + file.save_array[2];
			std::cout << "\n   Class: \033[44m 1. WIZARD \033[0m \033[44m 2. WARRIOR \033[0m \033[44m 3. ROGUE \033[0m \033[44m 4. BARD \033[0m \033[44m 5. DRUID \033[0m";
			std::cout << "\n   Level:";
			std::cout << "\n   Health:";
			std::cout << "\n   Energy:";
			std::cout << "\n   Mana:";
			std::cout << "\n";
			std::cout << "\n   Strength:";
			std::cout << "\n   Vigor:";
			std::cout << "\n   Constitution:";
			std::cout << "\n   Agility:";
			std::cout << "\n   Dexterity:";
			std::cout << "\n   Stamina:";
			std::cout << "\n   Intelligence:";
			std::cout << "\n   Charisma:";
			std::cout << "\n   Perspicacity:";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input == "1") {
				file.save_array[3] = "Wizard";
				temp_hp = 6;
				temp_mana = 3;
				temp_energy = 3;
				break;
			}
			else if (input == "2") {
				file.save_array[3] = "Warrior";
				temp_hp = 10;
				temp_mana = 0;
				temp_energy = 5;
				break;
			}
			else if (input == "3") {
				file.save_array[3] = "Rogue";
				temp_hp = 8;
				temp_mana = 0;
				temp_energy = 4;
				break;
			}
			else if (input == "4") {
				file.save_array[3] = "Bard";
				temp_hp = 8;
				temp_mana = 1;
				temp_energy = 4;
				break;
			}
			else if (input == "5") {
				file.save_array[3] = "Druid";
				temp_hp = 8;
				temp_mana = 2;
				temp_energy = 4;
				break;
			}
		}
		
		PlaySound(TEXT("dice.wav"), NULL, SND_FILENAME | SND_ASYNC);
		int r[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_str = r[0] + r[1] + r[2] + r[3] - std::min({r[0], r[1], r[2], r[3]});
		int r2[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_vig = r2[0] + r2[1] + r2[2] + r2[3] - std::min({ r2[0], r2[1], r2[2], r2[3] });
		int r3[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_const = r3[0] + r3[1] + r3[2] + r3[3] - std::min({ r3[0], r3[1], r3[2], r3[3] });
		int r4[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_agi = r4[0] + r4[1] + r4[2] + r4[3] - std::min({ r4[0], r4[1], r4[2], r4[3] });
		int r5[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_dex = r5[0] + r5[1] + r5[2] + r5[3] - std::min({ r5[0], r5[1], r5[2], r5[3] });
		int r6[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_stam = r6[0] + r6[1] + r6[2] + r6[3] - std::min({ r6[0], r6[1], r6[2], r6[3] });
		int r7[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_int = r7[0] + r7[1] + r7[2] + r7[3] - std::min({ r7[0], r7[1], r7[2], r7[3] });
		int r8[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_char = r8[0] + r8[1] + r8[2] + r8[3] - std::min({ r8[0], r8[1], r8[2], r8[3] });
		int r9[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
		temp_pers = r9[0] + r9[1] + r9[2] + r9[3] - std::min({ r9[0], r9[1], r9[2], r9[3] });

		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n   Name: " + file.save_array[0];
			std::cout << "\n   Gender: " + file.save_array[1];
			std::cout << "\n   Race: " + file.save_array[2];
			std::cout << "\n   Class: " + file.save_array[3];
			std::cout << "\n   Level: 1";
			std::cout << "\n   Health: \033[44m " + std::to_string(temp_hp + ((temp_const - 10) / 2)) + " \033[0m";
			std::cout << "\n   Energy: \033[44m " + std::to_string(temp_energy + ((temp_stam - 10) / 2)) + " \033[0m";
			std::cout << "\n   Mana: \033[44m " + std::to_string(temp_mana + ((temp_pers - 10) / 2)) + " \033[0m";
			std::cout << "\n";
			std::cout << "\n   Strength: \033[44m " + std::to_string(temp_str) + " \033[0m";
			std::cout << "\n   Vigor: \033[44m " + std::to_string(temp_vig) + " \033[0m";
			std::cout << "\n   Constitution: \033[44m " + std::to_string(temp_const) + " \033[0m";
			std::cout << "\n   Agility: \033[44m " + std::to_string(temp_agi) + " \033[0m";
			std::cout << "\n   Dexterity: \033[44m " + std::to_string(temp_dex) + " \033[0m";
			std::cout << "\n   Stamina: \033[44m " + std::to_string(temp_stam) + " \033[0m";
			std::cout << "\n   Intelligence: \033[44m " + std::to_string(temp_int) + " \033[0m";
			std::cout << "\n   Charisma: \033[44m " + std::to_string(temp_char) + " \033[0m";
			std::cout << "\n   Perspicacity: \033[44m " + std::to_string(temp_pers) + " \033[0m";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input == "1") {
				PlaySound(TEXT("dice.wav"), NULL, SND_FILENAME | SND_ASYNC);
				int r[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_str = r[0] + r[1] + r[2] + r[3] - std::min({ r[0], r[1], r[2], r[3] });
				int r2[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_vig = r2[0] + r2[1] + r2[2] + r2[3] - std::min({ r2[0], r2[1], r2[2], r2[3] });
				int r3[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_const = r3[0] + r3[1] + r3[2] + r3[3] - std::min({ r3[0], r3[1], r3[2], r3[3] });
				int r4[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_agi = r4[0] + r4[1] + r4[2] + r4[3] - std::min({ r4[0], r4[1], r4[2], r4[3] });
				int r5[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_dex = r5[0] + r5[1] + r5[2] + r5[3] - std::min({ r5[0], r5[1], r5[2], r5[3] });
				int r6[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_stam = r6[0] + r6[1] + r6[2] + r6[3] - std::min({ r6[0], r6[1], r6[2], r6[3] });
				int r7[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_int = r7[0] + r7[1] + r7[2] + r7[3] - std::min({ r7[0], r7[1], r7[2], r7[3] });
				int r8[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_char = r8[0] + r8[1] + r8[2] + r8[3] - std::min({ r8[0], r8[1], r8[2], r8[3] });
				int r9[4] = { dice.d6(), dice.d6(), dice.d6(), dice.d6() };
				temp_pers = r9[0] + r9[1] + r9[2] + r9[3] - std::min({ r9[0], r9[1], r9[2], r9[3] });
			}
		}
	}

	void load_game() {

	}


	void title() {
		while (true) {
			system("CLS");
			system("color 0F");
			std::cout << "\n\n\n\n\n\n\n\n\n\n";
			std::cout << "\n                          1.  START A NEW GAME";
			std::cout << "\n                          2. LOAD THE LAST SAVE\n";
			std::cout << "\n" << error;
			std::cout << "\n                          > ";
			getline(std::cin, input);

			if (input == "1") {
				new_game();
				break;
			}
			else if (input == "2") {
				load_game();
				break;
			}
		}
	}

}display;
