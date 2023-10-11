/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:59:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/11 21:57:00 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
ClapTrap::ClapTrap( void ): _name("CL4P-TP"), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
    std::cout << this->_name << " spawned" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
    std::cout << this->_name << " spawned" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
    std::cout << "ClapTrap copied" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << this->_name << " was destroyed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
    if (this != &rhs) {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getHp();
        this->_energyPoints = rhs.getEnergy();
        this->_attackDmg = rhs.getAttackDmg();
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Accessors                                 */
/* -------------------------------------------------------------------------- */
std::string ClapTrap::getName( void ) const {
    return this->_name;
}

void ClapTrap::setName( std::string name ) {
    this->_name = name;
}

int ClapTrap::getHp( void ) const {
    return this->_hitPoints;
}

void ClapTrap::setHp( unsigned int hp ) {
    this->_hitPoints = hp;
}

int ClapTrap::getEnergy( void ) const {
    return this->_energyPoints;
}

void ClapTrap::setEnergy( unsigned int energy ) {
    this->_energyPoints = energy;
}

int ClapTrap::getAttackDmg( void ) const {
    return this->_attackDmg;
}

void ClapTrap::setAttackDmg( unsigned int dmg ) {
    this->_attackDmg = dmg;
}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */
void ClapTrap::attack( const std::string& target ) {

    if (this->_energyPoints) {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->getName() << " attacks " << target
        << ", causing " << this->getAttackDmg() << " points of damage!" << std::endl;
    } else
        std::cout << "ClapTrap " << this->getName() << " is out of energy" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {

    if (!this->_hitPoints)
        return;

    std::cout << "ClapTrap " << this->getName() << " takes " << amount 
    << " points of damage!" << std::endl;

    if (amount >= this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->getName() << " died." << std::endl;
    } else
        this->_hitPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (this->_energyPoints) {
        this->_energyPoints--;
        this->_hitPoints += amount;
        
        std::cout << "ClapTrap " << this->getName() << " recovers " << amount 
        << " hit points!" << std::endl;
    } else
        std::cout << "ClapTrap " << this->getName() << " is out of energy" << std::endl;
}