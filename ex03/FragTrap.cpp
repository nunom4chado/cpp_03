/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:13:21 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 18:35:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "colors.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                              Static Attributes                             */
/* -------------------------------------------------------------------------- */
const unsigned int FragTrap::defaultHitPoints = 100;
const unsigned int FragTrap::defaultEnergyPoints = 100;
const unsigned int FragTrap::defaultAttackDmg = 30;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
FragTrap::FragTrap(void) : ClapTrap("FR4G-TP") {
    this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = FragTrap::defaultEnergyPoints;
    this->_attackDmg = FragTrap::defaultAttackDmg;

    cout << GREEN << "[FragTrap Default Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = FragTrap::defaultEnergyPoints;
    this->_attackDmg = FragTrap::defaultAttackDmg;

    cout << GREEN << "[FragTrap Parametric Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
    cout << GREEN << "[FragTrap Copy Constructer]: FragTrap " << src._name
         << " copied" << RESET << endl;
    *this = src;
}

FragTrap::~FragTrap(void) {
    cout << GREEN << "[FragTrap Destructer]: " << this->_name
         << " was destroyed" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    cout << GREEN << "[FragTrap Assignment Operator]: rhs name is " << rhs._name
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
void FragTrap::highFivesGuys(void) {
    cout << GREEN << "FragTrap " << this->_name << " gives a high five!!"
         << RESET << endl;
}