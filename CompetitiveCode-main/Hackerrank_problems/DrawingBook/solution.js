function pageCount(bookSize, target){
    return Math.min(                      //pick whichever has the lowest value between
        Math.floor(target/2)+1,           //number of pages from beginning
        Math.floor((bookSize-target)/2)+1 //number of pages from end
        )
}