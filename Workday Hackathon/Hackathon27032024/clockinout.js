let time = 0;
let timer;
let isRunning = false;

function startTimer() {
  if (!isRunning) {
    isRunning = true;
    timer = setInterval(updateTimer, 1500);
    cat.style.animationPlayState = 'running';
    cat.style.animationDuration = '1500s';
  }
}

function pauseTimer() {
  isRunning = false;
  clearInterval(timer);
  cat.style.animationPlayState = 'paused';
  cat.style.animationDuration = '1500s';
}

function resetTimer() {
  clearInterval(timer);
  time = 1500;
  updateDisplay();
    isRunning = true;
    timer = setInterval(updateTimer, 1500);
}

function updateTimer() {
  if (time => 0) {
    time++;
    updateDisplay();
  } else {
    clearInterval(timer);
    alert('Time is up!');
  }
}

function updateDisplay() {
  const minutes = Math.floor(time / 60);
  const seconds = time % 60;
  document.getElementById('timerDisplay').innerText = `${formatTime(minutes)}:${formatTime(seconds)}`;
}

function formatTime(time) {
  return time < 10 ? `0${time}` : time;
}

const cat = document.getElementById('cat');

cat.addEventListener('click', function() {
  if (!isRunning)
  {
    if (cat.style.animationPlayState !== 'paused') {
    cat.style.animationPlayState = 'paused';
    cat.style.animationDuration = '1500s';
    }
  } else {
    cat.style.animationPlayState = 'running';
    cat.style.animationDuration = '1500s';
  }
});
