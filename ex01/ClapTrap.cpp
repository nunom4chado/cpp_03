/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:59:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 00:30:11 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                              Static Attributes                             */
/* -------------------------------------------------------------------------- */
const unsigned int ClapTrap::_defaultHitPoints = 10;
const unsigned int ClapTrap::_defaultEnergyPoints = 10;
const unsigned int ClapTrap::_defaultAttackDmg = 0;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
ClapTrap::ClapTrap()
    : _name("CL4P-TP"), _hitPoints(_defaultHitPoints),
      _energyPoints(_defaultEnergyPoints), _attackDmg(_defaultAttackDmg) {
    cout << YELLOW << "[ClapTrap Default Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

ClapTrap::ClapTrap(string name)
    : _name(name), _hitPoints(_defaultHitPoints),
      _energyPoints(_defaultEnergyPoints), _attackDmg(_defaultAttackDmg) {
    cout << YELLOW << "[ClapTrap Parametric Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    cout << YELLOW << "[ClapTrap Copy Constructer]: ClapTrap " << src._name
         << " copied" << RESET << endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    cout << YELLOW << "[ClapTrap Destructer]: ClapTrap " << this->_name
         << " was destroyed" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    cout << YELLOW << "[ClapTrap Assignment Operator]: rhs name is "
         << rhs._name << RESET << endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDmg = rhs._attackDmg;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Accessors                                 */
/* -------------------------------------------------------------------------- */
string ClapTrap::getName(void) const { return this->_name; }

void ClapTrap::setName(string name) { this->_name = name; }

unsigned int ClapTrap::getHp(void) const { return this->_hitPoints; }

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->_hitPoints = hitPoints;
}

unsigned int ClapTrap::getEnergy(void) const { return this->_energyPoints; }

void ClapTrap::setEnergy(unsigned int energy) { this->_energyPoints = energy; }

unsigned int ClapTrap::getAttackDmg(void) const { return this->_attackDmg; }

void ClapTrap::setAttackDmg(unsigned int dmg) { this->_attackDmg = dmg; }

/* -------------------------------------------------------------------------- */
/*                           Other Member Functions                           */
/* -------------------------------------------------------------------------- */
void ClapTrap::attack(const string &target) {
    if (this->_energyPoints == 0) {
        cout << YELLOW << "ClapTrap " << this->_name << " is out of energy"
             << RESET << endl;
        return;
    }

    this->_energyPoints--;
    cout << YELLOW << "ClapTrap " << this->_name << " attacks " << target
         << ", causing " << this->_attackDmg << " points of damage!" << RESET
         << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0) {
        return; // prevent dying when already dead
    }

    cout << YELLOW << "ClapTrap " << this->_name << " takes " << amount
         << " points of damage!" << RESET << endl;

    if (amount >= this->_hitPoints) {
        this->_hitPoints = 0;
        cout << YELLOW << "ClapTrap " << this->_name << " died." << RESET
             << endl;
    } else {
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints == 0) {
        cout << YELLOW "ClapTrap " << this->_name << " is out of energy"
             << RESET << endl;
        return;
    }

    this->_energyPoints--;
    this->_hitPoints += amount;

    cout << YELLOW << "ClapTrap " << this->_name << " recovers " << amount
         << " hit points!" << RESET << endl;
}