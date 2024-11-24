var counter = 1;
setInterval(function () {

    document.getElementById('radio' + counter).checked = true;
    counter++;

    if (counter > 3) {

        counter = 1;
    }

}, 4000);


document.addEventListener('DOMContentLoaded', () => {
    const tabBar = document.getElementById('tabBar');
    const stickyOffset = tabBar.offsetTop;

    window.addEventListener('scroll', () => {
      if (window.scrollY > stickyOffset) {
        tabBar.classList.add('sticky');
      } else {
        tabBar.classList.remove('sticky');
      }
    });
  });
