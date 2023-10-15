/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:39:23 by numartin          #+#    #+#             */
/*   Updated: 2023/10/15 23:56:02 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();                    // Default Constructer (Canonical)
    ScavTrap(std::string name);    // Parametric Constructer
    ScavTrap(const ScavTrap &src); // Copy Constructer (Canonical)
    ~ScavTrap();                   // Destructer (Canonical)

    ScavTrap &operator=(const ScavTrap &rhs); // Assignment Operator (Canonical)

    // Other Member Functions
    void attack(const std::string &target);
    void guardGate();

  protected:
    static const unsigned int _defaultHitPoints;
    static const unsigned int _defaultEnergyPoints;
    static const unsigned int _defaultAttackDmg;
};

#endif