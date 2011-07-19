/*
 [auto_generated]
 boost/numeric/odeint/integrate/do_nothing_observer.hpp

 [begin_description]
 null_observer or do_nothing_observer.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_INTEGRATE_DO_NOTHING_OBSERVER_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_INTEGRATE_DO_NOTHING_OBSERVER_HPP_INCLUDED

namespace boost {
namespace numeric {
namespace odeint {

struct do_nothing_observer
{
    template< class State , class Time >
    void operator()( const State& x , const Time &t ) const
    {

    }
};

} // namespace odeint
} // namespace numeric
} // namespace boost

#endif // BOOST_NUMERIC_ODEINT_INTEGRATE_DO_NOTHING_OBSERVER_HPP_INCLUDED
