/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:44:39 by numartin          #+#    #+#             */
/*   Updated: 2023/10/15 16:49:24 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
#define CLAPTRAP_CLASS_H

#include <string>

class ClapTrap {
  public:
    ClapTrap();                    // Default Constructer (Canonical)
    ClapTrap(std::string name);    // Parametric Constructer
    ClapTrap(const ClapTrap &src); // Copy Constructer (Canonical)
    ~ClapTrap();                   // Destructer (Canonical)

    ClapTrap &operator=(const ClapTrap &rhs); // Assignment Operator (Canonical)

    // Accessors
    std::string getName(void) const;
    void setName(std::string name);
    unsigned int getHp(void) const;
    void setHitPoints(unsigned int hitPoints);
    unsigned int getEnergy(void) const;
    void setEnergy(unsigned int energy);
    unsigned int getAttackDmg(void) const;
    void setAttackDmg(unsigned int dmg);

    // Other Member Functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDmg;

    static const unsigned int _defaultHitPoints;
    static const unsigned int _defaultEnergyPoints;
    static const unsigned int _defaultAttackDmg;
};

#endif