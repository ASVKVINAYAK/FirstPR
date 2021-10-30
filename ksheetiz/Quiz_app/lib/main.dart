import 'package:first_app/result.dart';
import 'package:flutter/material.dart';

import './quiz.dart';

//void main(){
//  runApp(MyApp());
//}

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return _MyAppState();
  }
}

class _MyAppState extends State<MyApp> {
  final _questions = const [
    {
      'questionText': 'What\'s is your Favourite Color ?',
      'answers': [
        {'text': 'Black', 'score': 10},
        {'text': 'Red', 'score': 5},
        {'text': 'Green', 'score': 15},
        {'text': 'White', 'score': 1}
      ]
    },
    {
      'questionText': 'What\s your favourite animal ?',
      'answers': [
        {'text': 'Rabbit', 'score': 25},
        {'text': 'Snake', 'score': 5},
        {'text': 'Elephant', 'score': 30},
        {'text': 'Lion', 'score': 50}
      ]
    },
    {
      'questionText': 'What\s your favourite Game ?',
      'answers': [
        {'text': 'Basketball', 'score': 30},
        {'text': 'Tennis', 'score': 25},
        {'text': 'Football', 'score': 45},
        {'text': 'Cricket', 'score': 40}
      ]
    },
  ];
  var _questionIndex = 0;
  var _totalScore = 0;

  void _answerQuestion(int score) {
    _totalScore += score;
    if (_questionIndex < _questions.length) {}
    setState(() {
      _questionIndex = _questionIndex + 1;
    }); //forces flutter to build specific things again
    print('Answer Chosen !');
  }

  void _resetQuiz() {
    setState(() {
      _questionIndex = 0;
      _totalScore = 0;
    });
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
          appBar: AppBar(
            title: Text('Quiz App'),
          ),
          body: _questionIndex < _questions.length
              ? Quiz(
                  answerQuestion: _answerQuestion,
                  questionIndex: _questionIndex,
                  questions: _questions,
                )
              : Result(_totalScore, _resetQuiz)),
    );
  }
}
