/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:13:21 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 17:30:26 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
FragTrap::FragTrap( void ): ClapTrap("FR4G-TP") {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDmg = 30;

    std::cout << "FragTrap " << this->_name << " spawned" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDmg = 30;

    std::cout << "FragTrap " << this->_name << " spawned" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " gives a high five!!" << std::endl;
}