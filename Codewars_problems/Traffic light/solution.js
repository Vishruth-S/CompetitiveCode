/* 
 * Used two ternary operators to evaluate the state of traffic light as string argument
 * to display the light it will change next. e.g. enter 'yellow' and it will display 
 * 'red' as the next light.
 */

function updateLight(current) {

    return current === 'green' ? 'yellow' : current === 'yellow' ? 'red' : 'green';

}

