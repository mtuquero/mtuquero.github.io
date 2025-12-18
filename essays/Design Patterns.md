---
layout: essay
type: essay
title: "Design Patterns"
date: 2025-12-4
published: true
labels:
  - Design Patterns
---
<img width="300px" class="rounded float-start pe-4" src="/img/Design_patterns.png">

## Blueprints Before Bricks
Most people think software is built the way kids stack blocks: just put the pieces together and hope the tower doesn’t fall. But real software development is more like building a house. You can’t just start nailing boards together. You need a blueprint, a structure, and a shared way of solving problems so the next person who works on the house doesn’t walk in and think, “Who built this chaos?” That’s where design patterns come in they’re the architectural blueprints of software. They’re not lines of code, but repeatable ways to solve problems developers run into again and again. Almost like life hacks for programmers.

When I was first starting off our final project, I didn’t set out thinking, “I’m going to implement three design patterns today.” But as the project grew, I realized I was using patterns not because someone forced me to, but because they naturally made the app easier to build and easier to maintain. For example, every time a user filled out a match form, I relied on React’s State Management Pattern through useState. Instead of random variables floating around, each piece of information — team names, scores, verification status had a clear place to live. It felt like having labeled drawers instead of stuffing everything in one messy closet. The pattern kept everything organized and instantly updated the page whenever something changed.

But then a new challenge appeared, what happens if a user has multiple tabs open, or when new match data updates over time? I didn’t want the page to feel stale. So I leaned into another pattern,the Observer Pattern. My version wasn’t a complicated textbook example. Instead, it used useEffect to “watch” for changes in localStorage and to poll for updates every two seconds. 

And of course, the project needed forms — lots of them. Instead of letting inputs behave however they wanted, I used Controlled Components, another classic pattern in React. Every form field had a value and an onChange handler tied to state, giving React full control.

As our group has been working on this project, we’ve learned that design patterns aren’t just fancy interview terms. They’re the structure that helps keep our code organized, easier to understand, and easier to build on together. Even without noticing at first, we’ve already been using patterns like state management, observer behavior, and controlled components to keep the project clean and manageable as it grows.

---
## Design Patterns in my code
# Controlled Components pattern
<img width="500px" src="../img/Controlled Components pattern.png">

# State Management Pattern
<img width="500px" src="../img/State Management Pattern.png">

# Observer Pattern
<img width="500px" src="../img/Observer Pattern.png">

---
I used ChatGPT to help organize my thoughts, simplify wording, and make the essay flow more clearly. All reflections, explanations, and project details about the design patterns we used are my own.
