
const age = (planet, age) => {
    const earth = 365.25*24*60*60; //total seconds in a year

    // const list of orbital period of planets in Earth years
    const mercury = 0.2408467 ; 
    const venus = 0.61519726;
    const mars = 1.8808158;
    const jupiter = 11.862615;
    const saturn = 29.447498;
    const uranus = 84.016846;
    const neptune = 164.79132;
    let planet_age = 0;
    // check for "planets" value and calculate the age base on given "age" in seconds
    switch (planet) {
      case 'earth':
        planet_age = age/earth
        break;
      case 'mercury':
        planet_age = (age/earth)/mercury
      break;
      case 'venus':
        planet_age = (age/earth)/venus
      break;
      case 'mars':
        planet_age = (age/earth)/mars
      break;
      case 'jupiter':
        planet_age = (age/earth)/jupiter
      break;
      case 'saturn':
        planet_age = (age/earth)/saturn
      break;
      case 'uranus':
        planet_age = (age/earth)/uranus
      break;
      case 'neptune':
        planet_age = (age/earth)/neptune
      break;
      default:
        break;
    }
    let your_age = planet_age.toFixed(2) // reduce the floating value to 2 decimal place
    return Number(your_age); //return age
};
