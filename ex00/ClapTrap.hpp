/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:44:39 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 14:58:33 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

# include <iostream>

class ClapTrap {
    public:
        /* ----------------------- Constructers & Desctructer ----------------------- */
        ClapTrap( void ); // canonical
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & src ); // canonical
        ~ClapTrap( void ); // canonical

        /* --------------------------- Operator Overloads --------------------------- */
        ClapTrap & operator=( ClapTrap const & rhs ); // canonical

        /* -------------------------------- Accessors ------------------------------- */
        std::string getName( void ) const;
        void        setName( std::string name );

        int     getHp( void ) const;
        void    setHp( unsigned int hp );

        int     getEnergy( void ) const;
        void    setEnergy( unsigned int energy );

        int     getAttackDmg( void ) const;
        void    setAttackDmg( unsigned int dmg );

        /* --------------------------------- Others --------------------------------- */
        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDmg;

};

#endif