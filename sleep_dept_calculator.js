const getActualSleepHours = () => {
    /* Getting the total sleep hour per day of the week */ 
  
    // Sleep Hours per week
    let mondaySleepHours = 7;
    let tuesdaySleepHours = 9;
    let wednesdaySleepHours = 8;
    let thursdaySleepHours = 7;
    let fridaySleepHours = 6;
    let saturdaySleepHours = 7;
    let sundaySleepHours = 11;
  
    // Getting the total sleep hours
    return (
      mondaySleepHours + tuesdaySleepHours + wednesdaySleepHours + 
      thursdaySleepHours + fridaySleepHours + saturdaySleepHours + 
      sundaySleepHours);
  }
  
  const getIdealSleepHours = (idealHours) => {
    /* Getting the ideal sleep hours for a Week */ 
    return idealHours * 7;
  }
  
  const calculateSleepDebt = () => {
     /* Calculating the Sleel Debt */
  
    // Getting the Actual and Ideal Sleep Hours
    const actualSleepHours = getActualSleepHours();
    const idealSleepHours = getIdealSleepHours(8);
    
    // Store message for the user
    let msg = '';
    
  
    // Determining if the user have/haven't got the sleep needed
    if (actualSleepHours === idealSleepHours){
      msg = 'You have got perfect amount of sleep for this week';
    } else if (actualSleepHours > idealSleepHours){
      msg = `You have got ${actualSleepHours - idealSleepHours} more hour/s of sleep this week therefore, you got more sleep than needed for this week`;
    }else if (actualSleepHours < idealSleepHours){
      msg = `You are under the ideal sleep because you are lacking of ${idealSleepHours - actualSleepHours} hour/s of sleep for this week therefore, you should get some rest.`;
    }
    // Return the message
    return msg;
  }
  
  // Call the calculateSleepDebt function
  console.log(calculateSleepDebt());