/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:55:16 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 18:35:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "colors.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                              Static Attributes                             */
/* -------------------------------------------------------------------------- */
const unsigned int ScavTrap::defaultHitPoints = 100;
const unsigned int ScavTrap::defaultEnergyPoints = 50;
const unsigned int ScavTrap::defaultAttackDmg = 20;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
ScavTrap::ScavTrap(void) : ClapTrap("SC4V-TP") {
    this->_hitPoints = ScavTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDmg = ScavTrap::defaultAttackDmg;

    cout << BLUE << "[ScavTrap Default Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name) {
    this->_hitPoints = ScavTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDmg = ScavTrap::defaultAttackDmg;

    cout << BLUE << "[ScavTrap Parametric Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    cout << BLUE << "[ScavTrap Copy Constructer]: ScavTrap " << src._name
         << " copied" << RESET << endl;
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    cout << BLUE << "[ScavTrap Destructer]: " << this->_name << " was destroyed"
         << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    cout << BLUE << "[ScavTrap Assignment Operator]: rhs name is " << rhs._name
         << RESET << endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDmg = rhs._attackDmg;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void ScavTrap::attack(const string &target) {
    if (this->_energyPoints == 0) {
        cout << BLUE << "ScavTrap " << this->_name << " is out of energy"
             << RESET << endl;
        return;
    }

    this->_energyPoints--;
    cout << BLUE << "ScavTrap " << this->_name << " attacks " << target
         << ", causing " << this->_attackDmg << " points of damage!" << RESET
         << endl;
}

void ScavTrap::guardGate() {
    cout << BLUE << "ScavTrap " << this->_name << " is now in Gate Keeper mode!"
         << RESET << endl;
}