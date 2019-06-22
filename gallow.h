#include <iostream>
const int NUM_STATES = 7;
const std::string STATE0 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|       \n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n";

const std::string STATE1 = std::string()
                + "\n"
                +" ------\n"
                + "|      |\n"
                + "|      O\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n";

const std::string STATE2 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|      O\n"
                + "|      |\n"
                + "|      |\n"
                + "|      |\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n"
                + "|\n";

const std::string STATE3 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|      O\n"
                + "|      |\n"
                + "|      |\n"
                + "|      |\n"
                + "|      |\n"
                + "|       \\\n"
                + "|        \\\n"
                + "|         \\\n"
                + "|\n";

const std::string STATE4 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|      O\n"
                + "|      |\n"
                + "|      |\n"
                + "|      |\n"
                + "|      |\n"
                + "|     / \\\n"
                + "|    /   \\\n"
                + "|   /     \\\n"
                + "|\n";

const std::string STATE5 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|      O  /\n"
                + "|      | /\n"
                + "|      |/\n"
                + "|      |\n"
                + "|      |\n"
                + "|     / \\\n"
                + "|    /   \\\n"
                + "|   /     \\\n"
                + "|\n";

const std::string STATE6 = std::string()
                + "\n"
                + " ------\n"
                + "|      |\n"
                + "|   \\  O  /\n"
                + "|    \\ | /\n"
                + "|     \\|/\n"
                + "|      |\n"
                + "|      |\n"
                + "|     / \\\n"
                + "|    /   \\\n"
                + "|   /     \\\n"
                + "|\n";

std::string states[NUM_STATES] = {STATE0,STATE1,STATE2,STATE3,STATE4,STATE5,STATE6};
