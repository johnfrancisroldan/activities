/*
TRAINING DAYS
    Sends you a message for the event of the athlete signed up for and the days of the athlete have left to train.
 */


const getRandEvent = () => {
    /* Selects An Event At Random */

    // Generate random number from 0-2
    const random = Math.floor(Math.random() * 3);

    // Check the random number
    if (random === 0) {
        return 'Marathon';
    } else if (random === 1) {
        return 'Triathlon';
    } else if (random === 2) {
        return 'Pentathlon';
    }
};


const getTrainingDays = event => {
    /*  Number Of Days To Train Based On The Event Selected */

    let days;  // Storage for days

    // Check the event names and assign training days
    if (event === 'Marathon') {
        days = 50;
    } else if (event === 'Triathlon') {
        days = 100;
    } else if (event === 'Pentathlon') {
        days = 200;
    }

    // Return Training days
    return days;
};


const name = 'Nala';  // Athlete Name
const logEvent = (event, name) => {
    /* Show Athlete Name And Event Name */
    console.log(`${name}'s event is: ${event}`);
};


const logTime = (days, name) => {
    /* Show Athlete Training Days And Event Name */
    console.log(`${name}'s time to train is: ${days} days`);
};


// Training Days and Event for Athlete # 01
const event = getRandEvent();
const days = getTrainingDays(event);

logEvent(event, name);
logTime(days, name);

// Training Days and Event for Athlete # 02
const event2 = getRandEvent();
const days2 = getTrainingDays(event2);
const name2 = 'Warren';

logEvent(name2, event2);
logTime(name2, days2)