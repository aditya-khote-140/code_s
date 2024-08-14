// const quoteText = document.querySelector(".quote"),
//   quoteBtn = document.querySelector("button"),
//   authorName = document.querySelector(".name"),
//   speechBtn = document.querySelector(".speech"),
//   copyBtn = document.querySelector(".copy"),
//   twitterBtn = document.querySelector(".twitter"),
//   synth = window.speechSynthesis;

// function randomQuote() {
//   quoteBtn.classList.add("Loading");
//   quoteBtn.innerText = "Loading Quote...";

//   fetch("https://api.example.com/quotes") // Replace "https://api.example.com/quotes" with the actual API endpoint URL
//     .then(response => response.json())
//     .then(data => {
//       const quote = data.quote;
//       const author = data.author;

//       quoteText.innerText = quote;
//       authorName.innerText = author;

//       quoteBtn.classList.remove("Loading");
//       quoteBtn.innerText = "New Quote";
//     })
//     .catch(error => {
//       console.error("Error fetching quote:", error);
//       quoteText.innerText = "Failed to fetch quote";
//       authorName.innerText = "";
//       quoteBtn.classList.remove("Loading");
//       quoteBtn.innerText = "Try Again";
//     });
// }

// quoteBtn.addEventListener("click", randomQuote);


const quoteText = document.querySelector(".quote-text");
const authorText = document.querySelector(".author");
const nextButton = document.querySelector(".next-button");

function getRandomQuote() {
  quoteText.textContent = "Loading...";
  authorText.textContent = "- Loading";

  fetch("https://zenquotes.io/api/random")
    .then(response => response.json())
    .then(data => {
      const quote = data[0].q;
      const author = data[0].a;

      quoteText.textContent = quote;
      authorText.textContent = `- ${author}`;
    })
    .catch(error => {
      console.error("Error fetching quote:", error);
      quoteText.textContent = "Failed to fetch quote";
      authorText.textContent = "";
    });
}

nextButton.addEventListener("click", getRandomQuote);

getRandomQuote();
